pair<bool, int> checkSumTree(Node *root)
{
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

    if (root->left == NULL && root->right == NULL)
    {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }

    pair<bool, int> left = checkSumTree(root->left);
    pair<bool, int> right = checkSumTree(root->right);

    bool leftAns = left.first;
    bool rightAns = right.first;

    bool condition = root->data == left.second + right.second;

    pair<bool, int> ans;
    if (leftAns && rightAns && condition)
    {
        ans.first = true;
        ans.second = root->data + left.second + right.second;
    }
    else
    {
        ans.first = false;
    }
    return ans;
}

public:
bool isSumTree(Node *root)
{
    return checkSumTree(root).first;
}