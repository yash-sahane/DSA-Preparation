//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    bool isPossible(vector<vector<int>> &m, int n, vector<vector<int>> visited, int x, int y)
    {
        if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
        {
            return true;
        }
    }

    void solve(vector<vector<int>> &m, int n, vector<vector<int>> visited, vector<string> &ans, int x, int y, string path)
    {
        visited[x][y] = 1;

        // base case
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }

        // Down
        int newx = x + 1;
        int newy = y;
        if (isPossible(m, n, visited, newx, newy))
        {
            path.push_back('D');
            solve(m, n, visited, ans, newx, newy, path);
            path.pop_back();
        }

        // Left
        int newx = x;
        int newy = y - 1;
        if (isPossible(m, n, visited, newx, newy))
        {
            path.push_back('L');
            solve(m, n, visited, ans, newx, newy, path);
            path.pop_back();
        }

        // Right
        int newx = x;
        int newy = y + 1;
        if (isPossible(m, n, visited, newx, newy))
        {
            path.push_back('R');
            solve(m, n, visited, ans, newx, newy, path);
            path.pop_back();
        }

        // Up
        int newx = x - 1;
        int newy = y;
        if (isPossible(m, n, visited, newx, newy))
        {
            path.push_back('U');
            solve(m, n, visited, ans, newx, newy, path);
            path.pop_back();
        }

        visited[x][y] = 0;
    }

    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<string> ans;

        if (m[0][0] == 0)
        {
            return ans;
        }

        vector<vector<int>> visited = m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }

        int srcx = 0;
        int srcy = 0;

        string path = "";

        solve(m, n, visited, ans, srcx, srcy, path);
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends