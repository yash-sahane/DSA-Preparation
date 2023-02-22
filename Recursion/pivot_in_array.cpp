#include <iostream>
using namespace std;

int pivotIndex(int arr[], int begin, int end)
{
    int mid = begin + (end - begin) / 2;
    if (begin < end)
    {
        if (arr[mid] >= arr[0])
            pivotIndex(arr, mid + 1, end);
        else
            pivotIndex(arr, begin, mid);
    }
    else
    {
        return begin;
    }
}

main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = pivotIndex(arr, 0, n - 1);
    cout << ans;
}