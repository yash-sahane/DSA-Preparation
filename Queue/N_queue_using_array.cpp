// CS

#include <bits/stdc++.h>
class NQueue
{
public:
    int *arr;
    int *next;
    int *front;
    int *rear;
    int freespot;

    // Initialize your data structure.
    NQueue(int n, int s)
    {
        arr = new int[s];
        next = new int[s];
        front = new int[n];
        rear = new int[n];
        freespot = 0;

        for (int i = 0; i < s; i++)
        {
            next[i] = i + 1;
        }
        next[s - 1] = -1;

        for (int i = 0; i < n; i++)
        {
            front[i] = rear[i] = -1;
        }
    }

    // Enqueues 'X' into the Mth queue. Returns true if it gets pushed into the queue, and false otherwise.
    bool enqueue(int x, int m)
    {
        if (freespot == -1)
        {
            return false;
        }

        // find index for inserting an element
        int index = freespot;

        // update freesport
        freespot = next[index];

        // update front
        if (front[m - 1] == -1)
        {
            // if 1st element then updated front
            front[m - 1] = index;
        }
        else
        {
            // if not a first element keep track of next rear where the element will push
            // assume 10,0 10,1 20,0
            // so for inserting 20 in 1st queue need to track
            // where the next item of that queue will go.
            // can be track using freesport which is index

            rear[m - 1] = next[rear[m - 1]] = index;
        }

        // update rear
        rear[m - 1] = index;

        // update next
        next[index] = -1;

        // push element
        arr[index] = x;
    }

    // Dequeues top element from Mth queue. Returns -1 if the queue is empty, otherwise returns the popped element.
    int dequeue(int m)
    {
        if (front[m - 1] == -1)
        {
            return -1;
        }

        // find index of front which we will delete
        int index = front[m - 1];

        // increment front after pop
        front[m - 1] = next[index];

        // manage free spot
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
};