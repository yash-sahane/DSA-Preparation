#include <bits/stdc++.h>

using namespace std;
int firstIndex(int arr[], int n, int key)
{
    int begin = 0;
    int end = n - 1;
    int mid = begin + (end - begin) / 2;
    int first = -1;

    while (begin <= end)
    {
        if (arr[mid] == key)
        {
            first = mid;
            end = mid - 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            begin = mid + 1;
        }
        mid = begin + (end - begin) / 2;
    }
    return first;
}

int lastIndex(int arr[], int n, int key)
{
    int begin = 0;
    int end = n - 1;
    int mid = begin + (end - begin) / 2;
    int last = -1;

    while (begin <= end)
    {
        if (arr[mid] == key)
        {
            last = mid;
            begin = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            begin = mid + 1;
        }
        mid = begin + (end - begin) / 2;
    }
    return last;
}

class Solution
{
public:
    /* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
    int count(int arr[], int n, int x)
    {
        int first = firstIndex(arr, n, x);
        int last = lastIndex(arr, n, x);
        if (last == -1 && first == -1)
        {
            return 0;
        }
        else
        {
            return last - first + 1;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
