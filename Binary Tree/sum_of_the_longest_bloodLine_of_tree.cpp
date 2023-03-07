void solve(Node *root, int sum, int &maxSum, int len, int &maxLen)
{
    if (root == NULL)
    {
        // possiblity of maxLen < len : need to update maxLen
        if (maxLen < len)
        {
            maxLen = len;
            maxSum = sum;
        }
        else if (maxLen == len)
        {
            maxSum = max(sum, maxSum);
        }
        return;
    }

    sum += root->data;

    solve(root->left, sum, maxSum, len + 1, maxLen);
    solve(root->right, sum, maxSum, len + 1, maxLen);
}

int sumOfLongRootToLeafPath(Node *root)
{
    int sum = 0;
    int maxSum = INT_MIN;

    int len = 0;
    int maxLen = 0;

    solve(root, sum, maxSum, len, maxLen);

    return maxSum;
}