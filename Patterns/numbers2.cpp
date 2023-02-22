/*

 1 2 3
 1 2 3
 1 2 3

*/

#include <iostream>
using namespace std;

main()
{
    int n, m;
    cin >> n >> m;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= m)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}