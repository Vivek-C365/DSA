#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
            cout << top << endl;
        }
        else
        {
            cout << "error in push" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            cout << "top element " << arr[top] << " is pop from stact" << endl;
            top--;
        }
        else
        {
            cout << "Stack is empty. nothing to pop from stack" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else if (top <= -1)
        {
            return 0;
        }
    }
};

int main()
{
    int stsize;

    cout << "enter size of stack" << endl;
    cin >> stsize;
    cout << endl;

    Stack st(stsize);

    int number, value;

    do
    {
        cout << "type --1-- Push in stack" << endl;
        cout << "type --2-- Pop from stack" << endl;
        // cout << "3) Display stack" << endl;
        // cout << "4) Exit" << endl;
        cout << endl;

        cout << "enter your number" << endl;
        cin >> number;
        switch (number)
        {
        case 1:
            cout << "enter number you want to push in stack" << endl;
            cin >> value;
            st.push(value);
            break;

        case 2:

            st.pop();
            cout << "current element present on top is - " << st.peek() << endl;
            break;
        }
    } while (number == 1 || number == 2);
}