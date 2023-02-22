#include <bits/stdc++.h>
using namespace std;

main()
{
    vector<int> test(3);
    int element;
    for (int i = 0; i < test.size(); i++)
    {
        cin >> test[i];
    }
    // for (int i = 6; i < 10; i++)
    // {
    //     cin >> test[i];
    // }

    for (int i = 0; i < test.size(); i++)
    {
        cout << test[i] << " ";
    }
    cout << endl
         << test.size() << endl;
}