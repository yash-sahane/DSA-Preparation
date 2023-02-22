#include <iostream>
using namespace std;

main()
{
    int n;
    cin >> n;

    int first = 0;
    int second = 1;

    cout << first << ' ' << second << ' ';

    for (int i = 1; i <= n; i++)
    {
        int next = first + second;
        cout << next << ' ';
        first = second;
        second = next;
    }
}