#include <iostream>
using namespace std;

void reachHome(int src, int dst)
{
    cout << src << endl;

    if (src == dst)
    {
        cout << "reached";
        return;
    }

    src++;
    reachHome(src, dst);
}

main()
{
    int src = 1, dst;
    cin >> dst;

    reachHome(src, dst);
}