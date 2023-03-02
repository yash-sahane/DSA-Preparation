// GFG

int height(struct Node *node)
{
    if (node == NULL)
    {
        return 0;
    }

    int ans = max(height(node->left), height(node->right)) + 1;
    return ans;
}