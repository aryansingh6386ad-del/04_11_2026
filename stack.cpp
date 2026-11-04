
#include<iostream>
using namespace std;

#define SIZE 5

class Stack {
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    // Push operation
    void push(int value) {
        if(top == SIZE - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }

        top++;
        arr[top] = value;

        cout << value << " inserted" << endl;
    }

    // Pop operation
    void pop() {
        if(top == -1) {
            cout << "Stack Underflow!" << endl;
            return;
        }

        cout << arr[top] << " removed" << endl;
        top--;
    }

    // Peek operation
    void peek() {
        if(top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Top: " << arr[top] << endl;
    }

    // Check empty
    bool isEmpty() {
        return top == -1;
    }

    // Check full
    bool isFull() {
        return top == SIZE - 1;
    }

    // Display stack
    void display() {
        if(top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Stack elements:" << endl;

        for(int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();
    s.peek();
    s.pop();

    return 0;
}
