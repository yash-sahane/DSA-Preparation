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
            cout << j << ' ';
            j++;
        }
        int k = (i - 1) * 2;
        while (k > 0)
        {
            cout << '*' << ' ';
            k--;
        }
        int l = n - i + 1;
        while (l > 0)
        {
            cout << l << ' ';
            l--;
        }
        cout << endl;
        i++;
    }
}