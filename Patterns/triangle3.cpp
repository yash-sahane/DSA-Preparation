/*

 ****
 ***
 **
 *

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
        while (j <= n - i + 1)
        {
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
    }
}