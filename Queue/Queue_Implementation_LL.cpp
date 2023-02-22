// Code Studio - Implement a Queue

#include <bits/stdc++.h>

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
};

class Queue
{
public:
    Node *qFront;
    Node *qRear;

    Queue()
    {
        qFront = NULL;
        qRear = NULL;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        if (qFront == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data)
    {
        Node *temp = new Node(data);
        if (qRear == NULL)
        {
            qFront = temp;
            qRear = temp;
            return;
        }
        qRear->next = temp;
        qRear = temp;
    }

    int dequeue()
    {
        if (qFront == NULL)
        {
            return -1;
        }

        Node *temp = qFront;
        qFront = qFront->next;
        if (qFront == NULL)
        {
            qRear = NULL;
        }
        int data = temp->data;
        delete temp;
        return data;
    }

    int front()
    {
        if (qFront == NULL)
        {
            return -1;
        }
        else
        {
            return qFront->data;
        }
    }
};
