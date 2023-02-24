// GFG

// User function Template for C++
void solve(queue<int> &q, int k)
{
    if (k <= 0)
    {
        return;
    }

    int element = q.front();
    q.pop();
    solve(q, k - 1);
    q.push(element);
}

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k)
{
    solve(q, k);

    for (int i = 0; i < q.size() - k; i++)
    {
        int element = q.front();
        q.pop();
        q.push(element);
    }
    return q;
}