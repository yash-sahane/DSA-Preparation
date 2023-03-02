// GFG

vector<int> postOrder(Node *root)
{
    vector<int> res;
    if (root == NULL)
    {
        return res;
    }

    vector<int> leftSubtree = postOrder(root->left);
    res.insert(res.end(), leftSubtree.begin(), leftSubtree.end());

    vector<int> rightSubtree = postOrder(root->right);
    res.insert(res.end(), rightSubtree.begin(), rightSubtree.end());

    res.push_back(root->data);
}