#include <iostream>
using namespace std;

int check_palindrome(int n, int temp)
{
    if (n != 0)
    {
        int digit = n % 10;
        temp = (temp * 10) + digit;
        n /= 10;
        return check_palindrome(n, temp);
    }
    return temp;
}

main()
{
    int n;
    cin >> n;

    int ans = check_palindrome(n, 0);
    if (ans == n)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
}