#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node *&head, int data)
{
    // new node create
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    // new node create
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{

    // insert at Start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at Last Position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
}

void deleteNode(Node *&head, Node *&tail, int position)
{

    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free start ndoe
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if (curr->next == NULL)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << ' ';
        temp = temp->next;
    }
}

// bool isLoopPresent(Node *&head)
// {
//     if (head == NULL)
//     {
//         return false;
//     }

//     Node *temp = head;
//     map<Node *, bool> visited;

//     while (temp != NULL)
//     {
//         if (visited[temp] == true)
//         {
//             cout << "Loop is present at : " << temp->data << endl;
//             return 1;
//         }
//         else
//         {
//             visited[temp] = true;
//             temp = temp->next;
//         }
//     }
//     return false;
// }

Node *floydCycleDetect(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            // cout << "cycle is present at " << slow->data;
            return slow;
        }
    }
    return NULL;
}

Node *headOfLoop(Node *&head)
{
    Node *intersection = floydCycleDetect(head);
    Node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

Node *removeLoop(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *loopHead = headOfLoop(head);
    Node *temp = loopHead;
    while (temp->next != loopHead)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}

main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtPosition(head, tail, 4, 40);
    tail->next = head->next;
    Node *loopHead = headOfLoop(head);

    // print(head);     // here loop is present
    removeLoop(head);
    print(head); // loop is not present
    cout << floydCycleDetect(head);

    //     cout << "head " << head->data << endl;
    // cout << "tail " << tail->data;
}