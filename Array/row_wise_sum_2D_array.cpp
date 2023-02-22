#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int rowSum(int arr[3][3], int a, int b)
{
    int maxSum = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";

        if (maxSum < sum)
        {
            maxSum = sum;
            rowIndex = i;
        }
    }
    return rowIndex;
}

main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    int rowIndex = rowSum(arr, 3, 3);
    cout << rowIndex;
}