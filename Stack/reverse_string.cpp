#include <iostream>
#include <stack>
using namespace std;

main()
{
    string str = "hahah";

    stack<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        s.push(str[i]);
    }

    string ans = "";
    while (!s.empty())
    {
        char top = s.top();
        ans.push_back(top);
        s.pop();
    }
    cout << "Reverse of string is : " << ans << endl;
}
