#include <iostream>
using namespace std;

int findRec(int n)
{
    if (n == 0)
        return 1;

    return n * findRec(n - 1);
}

main()
{
    int n;
    cin >> n;

    cout << findRec(n);
}