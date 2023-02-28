// GFG
// output - {1,2,3,4,5}
class Solution
{
public:
    // Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node *node)
    {
        vector<int> result;

        if (node == NULL)
        {
            return result;
        }

        queue<Node *> q;
        q.push(node);

        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();
            result.push_back(temp->data);

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        return result;
    }
};