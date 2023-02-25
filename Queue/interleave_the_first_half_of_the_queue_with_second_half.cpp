// CS - Method - 1 - using queue

#include <bits/stdc++.h>
void interLeaveQueue(queue<int> &q)
{

    queue<int> newq;

    int size = q.size();

    for (int i = 0; i < size / 2; i++)
    {
        int element = q.front();
        q.pop();
        newq.push(element);
    }

    while (!newq.empty())
    {
        int element1 = newq.front();
        newq.pop();
        q.push(element1);
        int element2 = q.front();
        q.pop();
        q.push(element2);
    }
}