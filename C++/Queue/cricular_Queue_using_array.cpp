#include <iostream>

using namespace std;

class Queue {
private:
    int front;
    int rear;
    int size;
    int *arr;

public:
    Queue(int si) {
        front = -1;
        rear = -1;
        size = si;
        arr = new int[size];
    }

    ~Queue() {
        delete[] arr;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Your Queue is full" << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % size;
        arr[rear] = value;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Your Queue is underflow" << endl;
            return;
        }
        int val = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
        cout << "Removed value: " << val << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        int i = front;
        while (true) {
            cout << arr[i] << ", ";
            if (i == rear) {
                break;
            }
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main() {
    Queue qe(3);
    qe.enqueue(1);
    qe.enqueue(70);
    qe.enqueue(10);

    cout << "Your array is: ";
    qe.display();

    qe.dequeue();
    cout << "Your array after dequeue is: ";
    qe.display();

    qe.enqueue(78);
    cout << "Your array after enqueue is: ";
    qe.display();

    return 0;
}
