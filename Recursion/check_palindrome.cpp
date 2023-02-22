#include <iostream>
using namespace std;

bool check_palindrome(int arr[], int s, int e)
{
    if (s >= e)
    {
        return true;
    }
    else if (arr[s] != arr[e])
    {
        return false;
    }
    return check_palindrome(arr, s + 1, e - 1);
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

    int ans = check_palindrome(arr, 0, n - 1);
    cout << ans;
}