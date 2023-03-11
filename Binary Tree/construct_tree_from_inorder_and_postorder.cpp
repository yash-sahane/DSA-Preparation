Node *solve(int in[], int post[], int &postIndex, int n, map<int, int> &nodeToIndex, int inStart, int inEnd)
{
    if (postIndex < 0 || inStart > inEnd)
    {
        return NULL;
    }

    int element = post[postIndex--];
    Node *root = new Node(element);
    int position = nodeToIndex[element];

    // calls
    root->right = solve(in, post, postIndex, n, nodeToIndex, position + 1, inEnd);
    root->left = solve(in, post, postIndex, n, nodeToIndex, inStart, position - 1);

    return root;
}

Node *buildTree(int in[], int post[], int n)
{
    int postIndex = n - 1;
    map<int, int> nodeToIndex;
    for (int i = 0; i < n; i++)
    {
        nodeToIndex[in[i]] = i;
    }

    Node *ans = solve(in, post, postIndex, n, nodeToIndex, 0, n - 1);

    return ans;
}
