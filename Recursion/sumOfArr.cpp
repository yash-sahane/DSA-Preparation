#include <iostream>
using namespace std;

int sumOfArr(int arr[], int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return arr[0];

    int sum = arr[0] + sumOfArr(arr + 1, n - 1);

    return sum;
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

    cout << sumOfArr(arr, n);
}