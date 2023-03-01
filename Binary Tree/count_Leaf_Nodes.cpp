void countLeaf(BinaryTreeNode<int> *root, int &count)
{
    if (root == NULL)
    {
        return;
    }

    countLeaf(root->left, count);

    if (root->left == NULL && root->right == NULL)
    {
        count++;
    }

    countLeaf(root->right, count);
}

int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    int count = 0;
    countLeaf(root, count);
    return count;
}