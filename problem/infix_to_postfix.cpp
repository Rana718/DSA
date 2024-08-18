#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
    int size;
    int top;
    char *arr;

public:
    Stack(int size) {
        this->size = size;
        this->top = -1;
        this->arr = new char[size];
    }

    ~Stack() {
        delete[] arr;
    }

    char stackTop() {
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }

    void push(char val) {
        if (isFull()) {
            cout << "Stack is Overflow\n";
        } else {
            arr[++top] = val;
        }
    }

    char pop() {
        if (isEmpty()) {
            cout << "Stack is Underflow\n";
            return -1;
        } else {
            return arr[top--];
        }
    }

    int precedence(char ch) {
        if (ch == '*' || ch == '/') {
            return 3;
        } else if (ch == '+' || ch == '-') {
            return 2;
        } else {
            return 0;
        }
    }

    bool isOperator(char ch) {
        return ch == '+' || ch == '-' || ch == '*' || ch == '/';
    }

    string infixToPostfix(string infix) {
        string postfix;
        for (int i = 0; i < infix.length(); i++) {
            if (!isOperator(infix[i])) {
                postfix += infix[i];
            } else {
                while (!isEmpty() && precedence(infix[i]) <= precedence(stackTop())) {
                    postfix += pop();
                }
                push(infix[i]);
            }
        }
        while (!isEmpty()) {
            postfix += pop();
        }
        return postfix;
    }
};

int main() {
    string infix = "x-y/z-k*d";
    Stack stack(100);
    string postfix = stack.infixToPostfix(infix);
    cout << "Postfix is " << postfix << endl;
    return 0;
}
