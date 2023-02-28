#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;

    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the left data for " << data << " : ";
    root->left = buildTree(root->left);

    cout << "Enter the right data for " << data << " : ";
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> queue;
    queue.push(root);
    queue.push(NULL);

    while (!queue.empty())
    {
        Node *temp = queue.front();
        queue.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!queue.empty())
            {
                queue.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                queue.push(temp->left);
            }
            if (temp->right)
            {
                queue.push(temp->right);
            }
        }
    }
}

main()
{
    Node *root = NULL;

    root = buildTree(root);

    levelOrderTraversal(root);
}