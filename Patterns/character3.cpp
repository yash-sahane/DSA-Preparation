/*

A B C
B C D
C D E

*/

#include <iostream>
using namespace std;

main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int start = 'A' + i - 1;
        while (j <= n)
        {
            char ch = start;
            cout << ch;
            j++;
            start++;
        }
        cout << endl;
        i++;
    }
}