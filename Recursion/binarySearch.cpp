#include <iostream>
using namespace std;

bool isPresent(int arr[], int s, int e, int key)
{
    int mid = s + (e - s) / 2;

    if (s > e)
    {
        return false;
    }

    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] > key)
    {
        return isPresent(arr, 0, mid - 1, key);
    }
    else
    {
        return isPresent(arr, mid + 1, e, key);
    }
}

main()
{
    int n, key;
    cin >> n >> key;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << isPresent(arr, 0, n - 1, key);
}