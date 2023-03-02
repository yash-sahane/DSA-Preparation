// GFG

class Solution
{
private:
    int height(Node *root, int &diameter)
    {
        if (root == NULL)
        {
            return 0;
        }

        int left = height(root->left, diameter);
        int right = height(root->right, diameter);

        diameter = max(diameter, left + right + 1);

        return max(left, right) + 1;
    }

public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node *root)
    {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }
};