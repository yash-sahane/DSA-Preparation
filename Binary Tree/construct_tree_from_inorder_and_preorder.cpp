void createMapping(int in[], map<int, int> &nodeToIndex, int n)
{
    for (int i = 0; i < n; i++)
    {
        nodeToIndex[in[i]] = i;
    }
}

Node *solve(int in[], int pre[], int n, int &preIndex, int inStart, int inEnd, map<int, int> &nodeToIndex)
{
    if (preIndex >= n || inStart > inEnd)
    {
        return NULL;
    }

    int element = pre[preIndex++];
    Node *root = new Node(element);
    int pos = nodeToIndex[element];

    // calls
    root->left = solve(in, pre, n, preIndex, inStart, pos - 1, nodeToIndex);
    root->right = solve(in, pre, n, preIndex, pos + 1, inEnd, nodeToIndex);

    return root;
}

Node *buildTree(int in[], int pre[], int n)
{
    int preIndex = 0;
    map<int, int> nodeToIndex;

    createMapping(in, nodeToIndex, n);

    Node *ans = solve(in, pre, n, preIndex, 0, n - 1, nodeToIndex);
    return ans;
}