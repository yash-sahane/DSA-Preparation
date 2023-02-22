#include <bits/stdc++.h>
using namespace std;

int firstOccur(int arr[], int s, int e, int k, int ans)
{
    // int ans = -1;
    int mid = s + (e - s) / 2;

    // cout << arr[mid] << " " << ans << " " << endl;
    if (s > e)
    {
        return ans;
    }
    else
    {
        if (arr[mid] == k)
        {
            ans = mid;
            firstOccur(arr, s, mid - 1, k, ans);
        }
        else if (arr[mid] > k)
        {
            firstOccur(arr, s, mid - 1, k, ans);
        }
        else
        {
            firstOccur(arr, mid + 1, e, k, ans);
        }
    }
    // return ans;
}

int lastOccur(int arr[], int s, int e, int k, int ans)
{
    // int ans = -1;
    int mid = s + (e - s) / 2;

    // cout << arr[mid] << " " << ans << " " << endl;
    if (s > e)
    {
        return ans;
    }
    else
    {
        if (arr[mid] == k)
        {
            ans = mid;
            lastOccur(arr, mid + 1, e, k, ans);
        }
        else if (arr[mid] > k)
        {
            lastOccur(arr, s, mid - 1, k, ans);
        }
        else
        {
            lastOccur(arr, mid + 1, e, k, ans);
        }
    }
    // return ans;
}

main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << lastOccur(arr, 0, n - 1, k, -1);
}