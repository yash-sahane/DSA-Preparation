#include <iostream>
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

main()
{
    int n, key;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter key";
    cin >> key;

    cout << firstIndex(arr, n, key);
    cout << lastIndex(arr, n, key);
}