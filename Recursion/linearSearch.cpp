#include <iostream>
using namespace std;

bool isPresent(int arr[], int n, int key)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        return isPresent(arr + 1, n - 1, key);
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

    cout << isPresent(arr, n, key);
}