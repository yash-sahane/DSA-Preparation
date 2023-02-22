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
};

class Stack
{
public:
    Node *top;

    Stack()
    {
        top = NULL;
    }

    bool isEmpty()
    {
        if (top == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        temp->next = top;
        top = temp;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Cannot be popped. Stack is empty !" << endl;
        }
        else
        {
            int value = top->data;
            Node *temp = top;
            top = top->next;
            cout << value << " has been popped !" << endl;
            delete temp;
        }
    }

    void display()
    {
        Node *temp = top;
        if (isEmpty())
        {
            cout << "There is nothing in the stack to display " << endl;
        }
        else
        {
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
        }
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "There is no element in stack !" << endl;
        }
        else
        {
            cout << "Top of the stack is " << top->data << endl;
        }
    }
};

main()
{
    Stack st;
    int choice, data;

    do
    {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter a value to push : ";
            cin >> data;
            st.push(data);
            break;

        case 2:
            st.pop();
            break;

        case 3:
            st.peek();
            break;

        case 4:
            st.display();
            break;

        case 0:
            break;
        }
    } while (choice != 0);
}