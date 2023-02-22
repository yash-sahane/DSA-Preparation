/*

 1 1 1
 2 2 2
 3 3 3

*/

#include <iostream>
using namespace std;

main()
{
    int n, m;
    cin >> n >> m;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= m; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= m)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}