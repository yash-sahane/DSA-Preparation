vector<int> topView(Node *root)
{
    vector<int> result;
    if (root == NULL)
    {
        return result;
    }

    queue<pair<Node *, int>> q;
    map<int, int> topNode;

    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        Node *front = temp.first;
        q.pop();

        int hd = temp.second;
        if (topNode.find(hd) == topNode.end())
        {
            topNode[hd] = front->data;
        }

        if (front->left)
        {
            q.push(make_pair(front->left, hd - 1));
        }

        if (front->right)
        {
            q.push(make_pair(front->right, hd + 1));
        }
    }

    for (auto i : topNode)
    {
        result.push_back(i.second);
    }

    return result;
}