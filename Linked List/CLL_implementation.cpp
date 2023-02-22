#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for " << value << endl;
    }
};

void insertAtStart(Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        temp->next = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = tail->next;
        tail->next = temp;
    }
}

void insertAtEnd(Node *&tail, int data)
{
    if (tail == NULL)
    {
        insertAtStart(tail, data);
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = tail->next;
        tail->next = temp;
        tail = temp;
    }
}

void insertAtPos(Node *&tail, int pos, int data)
{
    if (tail == NULL || pos == 1)
    {
        insertAtStart(tail, data);
        return;
    }

    Node *temp = tail->next;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt += 1;
    }

    if (temp->next == tail->next)
    {
        insertAtEnd(tail, data);
        return;
    }

    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(Node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "Node is empty";
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&tail)
{
    Node *temp = tail->next;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail->next);
}

bool isCircular(Node *&head)
{
    if (head == NULL)
    {
        return true;
    }
    Node *temp = head->next;

    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == head)
    {
        return true;
    }
    return false;
}

main()
{
    Node *tail = NULL;

    insertAtEnd(tail, 10);
    insertAtEnd(tail, 20);
    insertAtEnd(tail, 30);
    insertAtEnd(tail, 40);
    bool ans = isCircular(tail);
    // print(tail);
    cout << ans;

    // cout << "head = " << tail->next->data << endl;
    // cout << "tail = " << tail->data;
}