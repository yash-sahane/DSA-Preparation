vector<int> reverseLevelOrder(Node *root)
{

    vector<int> result;

    if (!root)
    {
        return result;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        result.insert(result.begin(), temp->data);

        if (temp->right)
        {
            q.push(temp->right);
        }

        if (temp->left)
        {
            q.push(temp->left);
        }
    }

    return result;
}