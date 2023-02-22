#include <iostream>
#include <stack>
using namespace std;

main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.pop();

    if (s.empty())
    {
        cout << "Stack is empty!" << endl;
    }
    else
    {
        cout << "Stack is not empty!" << endl;
    }

    cout << s.top() << endl;

    cout << s.size() << endl;
}
