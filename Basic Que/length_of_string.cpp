#include <iostream>
#include <string>
using namespace std;

int get_length(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != 0; i++)
    {
        cout << ch[i];
        count++;
    }
    return count;
}

main()
{
    char ch[10];
    cin >> ch;

    cout << get_length(ch);
}