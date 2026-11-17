#include <iostream>
using namespace std;

int queueArr[5];
int front = 0;
int rear = -1;
int count = 0;

void enqueue (int value){
    if (count == 5) {
        cout << "Queue Overflow! Queue penuh." << endl;
    } else {
        rear = (rear + 1) % 5;
        queueArr[rear] = value;
        count++;
    }
}

void dequeue() {
    if (count == 0) {
        cout << "Queue Underflow! Queue kosong." << endl;
    } else {
        front = (front + 1) % 5;
        count--;
    }
}

void display() {
    cout << "Queue: ";
    int i = front;
    for (int n = 0; n < count; n++){
        cout << queueArr[i] << " ";
        i = (i +1) % 5;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    dequeue();
    dequeue();

    enqueue(60);
    enqueue(70);

    display();
    return 0;
}