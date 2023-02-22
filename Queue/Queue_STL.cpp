#include <iostream>
#include <queue>
using namespace std;

main()
{
    queue<int> q;

    q.push(10);
    cout << "front is " << q.front() << endl;
    cout << "back is " << q.back() << endl;

    q.push(20);
    cout << "front is " << q.front() << endl;
    cout << "back is " << q.back() << endl;

    q.push(30);
    cout << "front is " << q.front() << endl;
    cout << "back is " << q.back() << endl;

    q.pop();
    cout << "front is " << q.front() << endl;
    cout << "back is " << q.back() << endl;

    if (q.empty())
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "queue is not empty" << endl;
    }
}