/*

 *
 **
 ***
 ****

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
        while (j <= i)
        {
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
    }
}