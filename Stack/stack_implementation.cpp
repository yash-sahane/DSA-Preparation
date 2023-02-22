#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int value)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = value;
        }
        else
        {
            cout << "Stack is overflow" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is underflow" << endl;
        }
        else
        {
            top--;
        }
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << arr[top] << endl;
        }
    }

    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

main()
{
    Stack st(5);

    st.push(10);
    st.peek();
    // cout << st.empty() << endl;

    st.push(20);
    st.peek();
    // cout << st.empty() << endl;

    st.push(30);
    st.peek();
    // cout << st.empty() << endl;

    st.push(40);
    st.peek();
    // cout << st.empty() << endl;

    st.push(50);
    st.peek();
    // cout << st.empty() << endl;

    st.push(60);
    st.peek();
    // cout << st.empty() << endl;

    // st.display();

    st.pop();
    st.peek();

    // st.pop();
    // st.peek();

    // st.pop();
    // st.peek();

    // st.pop();
    // st.peek();

    // st.pop();
    // st.peek();

    // st.pop();
    // st.peek();

    // cout << st.empty();
}