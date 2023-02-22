// Code Studio - Implement a Queue

#include <bits/stdc++.h>
class Queue
{
    int *arr;
    int qFront;
    int qRear;
    int size;

public:
    Queue()
    {
        size = 100001;
        arr = new int[size];
        qFront = 0;
        qRear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        if (qFront == qRear)
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
        if (qRear == size)
        {
            return;
        }
        else
        {
            arr[qRear] = data;
            qRear += 1;
        }
    }

    int dequeue()
    {
        if (qFront == qRear)
        {
            return -1;
        }
        else
        {
            int value = arr[qFront];
            arr[qFront] = -1;
            qFront += 1;
            if (qFront == qRear)
            {
                qFront = 0;
                qRear = 0;
            }
            return value;
        }
    }

    int front()
    {
        if (qFront == qRear)
        {
            return -1;
        }
        else
        {
            return arr[qFront];
        }
    }
};