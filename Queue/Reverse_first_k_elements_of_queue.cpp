// GFG

queue<int> modifyQueue(queue<int> q, int k)
{
    stack<int> st;

    for (int i = 0; i < k; i++)
    {
        int element = q.front();
        q.pop();
        st.push(element);
    }

    while (!st.empty())
    {
        int element = st.top();
        st.pop();
        q.push(element);
    }

    int size = q.size();
    for (int i = 0; i < size - k; i++)
    {
        int element = q.front();
        q.pop();
        q.push(element);
    }
    return q;
}