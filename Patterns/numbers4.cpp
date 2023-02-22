/*

 1
 2 3
 3 4 5
 4 5 6 7

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
        int temp = i;
        while (j <= i)
        {
            cout << temp;
            temp++;
            j++;
        }
        cout << endl;
        i++;
    }
}