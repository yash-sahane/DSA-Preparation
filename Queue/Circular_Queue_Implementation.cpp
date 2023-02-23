// Code Studio - Implement Circular Queue

#include <bits/stdc++.h>

class CircularQueue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    // Initialize your data structure.
    CircularQueue(int n)
    {
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value)
    {
        // queue is full
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            return false;
        }
        // for 1st element
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear += 1;
        }
        arr[rear] = value;

        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue()
    {
        if (front == -1)
        {
            return -1;
        }
        int value = arr[front];
        arr[front] = -1;

        // if only 1 value is present
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front += 1;
        }
        return value;
    }
};