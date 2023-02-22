#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n)
{
    int begin = 0;
    int end = n - 1;
    int mid = begin + (end - begin) / 2;

    while (begin < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            begin = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = begin + (end - begin) / 2;
    }
    return begin;
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

    cout << peakElement(arr, n);
}