/*

D
C D
B C D

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
        char start = 'A' + n - i;
        while (j <= i)
        {
            cout << start;
            start++;
            j++;
        }
        cout << endl;
        i++;
    }
}