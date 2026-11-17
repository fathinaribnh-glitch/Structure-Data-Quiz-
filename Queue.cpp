#include <iostream>
using namespace std;

int queueArr[5];
int front = 0;
int rear = -1;

void enqueue(int value) {
    if (rear == 4 ) {
        cout << "Queue Overflow! Queue penuh." << endl;
    } else {
        rear++;
        queueArr[rear] = value;
        cout << value << " inserted successfully." << endl;
    }
}

void dequeue() {
    if (rear < front) {
        cout << "Queue Underflow! Queue kosong." << endl;
    } else {
        cout << queueArr[front] << " removed successfully." << endl;
        front++;
    }
}

void frontElement() {
    if (rear < front) {
        cout << "Queue kosong." << endl;
    } else {
        cout << " Front element: " << queueArr[front] << endl;
    }
}

void display() {
    cout << "Queue: ";
    for (int i = front; i <= rear; i++) {
        cout << queueArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int  choice = 0;
    int value;

    while (choice != 5) {
        cout << "\n == QUEUE MENU ==" << endl;
        cout << "1. Enqueue 2. Dequeue" << endl;
        cout << "3.front 4. Display 5.Exit" << endl;
        display();
        cout << "Choose operation: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;
            enqueue(value);
        } else if (choice == 2) {
            dequeue();
        } else if (choice == 3) {
            frontElement();
        } else if (choice == 4) {
            display();
        } else if (choice == 5) {
            cout << "Program selesai." << endl;
        } else {
            cout << "pilihan ridak valid." << endl;
        }
    }
    return 0;
}