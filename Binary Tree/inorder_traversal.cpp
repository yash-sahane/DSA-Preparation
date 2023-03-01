vector<int> inOrder(Node *root)
{

    vector<int> result;
    if (root == NULL)
    {
        return result;
    }

    vector<int> leftSubTree = inOrder(root->left);
    result.insert(result.end(), leftSubTree.begin(), leftSubTree.end());

    result.push_back(root->data);

    vector<int> rightSubTree = inOrder(root->right);
    result.insert(result.end(), rightSubTree.begin(), rightSubTree.end());

    return result;
}