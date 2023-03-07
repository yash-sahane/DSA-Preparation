void solve(Node *root, map<int, vector<int>> &diagonalMap, int lvl)
{
    if (root == NULL)
    {
        return;
    }

    diagonalMap[lvl].push_back(root->data);

    solve(root->left, diagonalMap, lvl + 1);
    solve(root->right, diagonalMap, lvl);
}

vector<int> diagonal(Node *root)
{
    map<int, vector<int>> diagonalMap;
    solve(root, diagonalMap, 0);

    vector<int> ans;

    for (auto i : diagonalMap)
    {
        for (auto j : i.second)
        {
            ans.push_back(j);
        }
    }

    return ans;
}