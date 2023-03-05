// GFG

void traverseLeftBoundry(Node *root, vector<int> &ans)
{
    if ((root == NULL) || (root->left == NULL && root->right == NULL))
    {
        return;
    }

    ans.push_back(root->data);
    if (root->left)
    {
        traverseLeftBoundry(root->left, ans);
    }
    else
    {
        traverseLeftBoundry(root->right, ans);
    }
}

void traverseLeafBoundry(Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
        return;
    }

    traverseLeafBoundry(root->left, ans);
    traverseLeafBoundry(root->right, ans);
}

void traverseRightBoundry(Node *root, vector<int> &ans)
{
    if ((root == NULL) || (root->left == NULL && root->right == NULL))
    {
        return;
    }

    if (root->right)
    {
        traverseRightBoundry(root->right, ans);
    }
    else
    {
        traverseRightBoundry(root->left, ans);
    }

    ans.push_back(root->data);
}

public:
vector<int> boundary(Node *root)
{
    vector<int> ans;

    if (root == NULL)
    {
        return ans;
    }

    // push main root element
    ans.push_back(root->data);

    // traverse left without leaf
    traverseLeftBoundry(root->left, ans);

    // traverse left side of root for all left leaf
    traverseLeafBoundry(root->left, ans);

    // traverse right side of root for all right leaf
    traverseLeafBoundry(root->right, ans);

    // traverse right without leaf
    traverseRightBoundry(root->right, ans);

    return ans;
}