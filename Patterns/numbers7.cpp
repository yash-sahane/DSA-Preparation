/*

 1111
  222
   33
    4

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
        int space = 0;
        while (space <= i - 1)
        {
            cout << ' ';
            space++;
        }
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}