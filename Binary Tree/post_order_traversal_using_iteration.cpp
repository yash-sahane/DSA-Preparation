// GFG

vector<int> postOrder(Node *root)
{
    vector<int> res;
    stack<Node *> s;
    Node *lastVisited = NULL;
    Node *curr = root;

    while (curr != NULL || !s.empty())
    {
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();

        if (curr->right == NULL || curr->right == lastVisited)
        {
            res.push_back(curr->data);
            lastVisited = curr;
            s.pop();
            curr = NULL;
        }
        else
        {
            curr = curr->right;
        }
    }
    return res;
}