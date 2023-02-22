#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }

    return isSorted(arr + 1, n - 1);
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

    bool ans = isSorted(arr, n);
    if (ans)
    {
        cout << "array is sorted";
    }
    else
    {
        cout << "array is not sorted";
    }
}