// CS - Method - 1 - using queue

#include <bits/stdc++.h>
void interLeaveQueue(queue<int> &q)
{
    stack<int> st;

    int size = q.size();

    for (int i = 0; i < size / 2; i++)
    {
        int element = q.front();
        st.push(element);
        q.pop();
    }

    while (!st.empty())
    {
        int element = st.top();
        q.push(element);
        st.pop();
    }

    for (int i = 0; i < size / 2; i++)
    {
        int element = q.front();
        q.push(element);
        q.pop();
    }

    for (int i = 0; i < size / 2; i++)
    {
        int element = q.front();
        st.push(element);
        q.pop();
    }

    while (!st.empty())
    {
        int element1 = st.top();
        q.push(element1);
        int element2 = q.front();
        q.push(element2);
        st.pop();
        q.pop();
    }
}