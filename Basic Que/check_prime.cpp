#include <iostream>
using namespace std;

main()
{
    int n;
    cin >> n;

    int flag = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "number is not prime";
    }
    else
    {
        cout << "number is prime";
    }
}