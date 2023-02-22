#include <iostream>
using namespace std;

int search_key(int arr[], int n, int key)
{
    int begin = 0;
    int end = n - 1;
    // int mid = (begin + end) / 2;     // this will produce error at a time of big integers
    int mid = begin + (end - begin) / 2;

    while (begin <= end)
    {
        if (arr[mid] == key)
            return mid;

        if (key > arr[mid])
            begin = mid + 1;
        else
            end = mid - 1;

        mid = begin + (end - begin) / 2;
    }

    return -1;
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

    cout << search_key(arr, n, key);
}