void solve(Node *root, vector<int> path, int k, int &count)
{
    if (root == NULL)
    {
        return;
    }

    path.push_back(root->data);

    solve(root->left, path, k, count);
    solve(root->right, path, k, count);

    int sum = 0;
    for (int i = path.size() - 1; i >= 0; i--)
    {
        sum += path[i];
        if (sum == k)
        {
            count++;
        }
    }
}

int sumK(Node *root, int k)
{
    vector<int> path;
    int count = 0;
    solve(root, path, k, count);
    return count;
}