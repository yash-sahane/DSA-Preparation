#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
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

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPos(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt += 1;
    }

    if (temp->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }

    Node *nodeToInsert = new Node(data);
    nodeToInsert->prev = temp;
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
}

void deleteNode(Node *&head, Node *&tail, int pos)
{
    if (pos == 1)
    {
        if (head == NULL)
        {
            cout << "List is empty";
        }
        else
        {
            Node *temp = head;
            temp->next->prev = NULL;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }
    else
    {
        Node *currNode = head;
        Node *prevNode = NULL;

        int cnt = 1;
        while (cnt < pos)
        {
            prevNode = currNode;
            currNode = currNode->next;
            cnt += 1;
        }
        if (currNode->next == NULL)
        {
            tail = prevNode;
        }
        prevNode->next = currNode->next;
        currNode->next->prev = prevNode;
        currNode->prev = NULL;
        currNode->next = NULL;
        delete currNode;
    }
}

void reverse(Node *&head)
{
    // if (head == NULL || head->next == NULL)
    // {
    //     return;
    // }

    Node *prevNode = NULL;
    Node *currNode = head;

    while (currNode != NULL)
    {
        prevNode = currNode->prev;
        currNode->prev = currNode->next;
        currNode->next = prevNode;
        currNode = currNode->next;
    }

    if (prevNode != NULL)
    {
        head = prevNode->prev;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "N" << endl;
    }
}

main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    // insertAtPos(head, tail, 3, 30);
    // deleteNode(head, tail, 2);

    reverse(head);

    print(head);

    cout << "Head is " << head->data << endl;
    cout << "Tail is " << tail->data << endl;
}