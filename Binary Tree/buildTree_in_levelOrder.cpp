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

void buildTree(Node *&root)
{
    queue<Node *> q;

    int data;
    cout << "enter root data ";
    cin >> data;
    root = new Node(data);
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        int leftData;
        cout << "Enter left data for " << temp->data;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        int rightData;
        cout << "enter right data for " << temp->data;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
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

    buildTree(root);

    levelOrderTraversal(root);
}