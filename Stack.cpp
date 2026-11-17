#include <iostream>
using namespace std;

int StackArr[5];
int top = -1;

void push(int value){
    if (top == 4) {
        cout << "Stack Overflow! Stack penuh." << endl;
    } else {
        top++
        stackArr[top] = value;
        cout << value << " inserted successfully." << endl;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Stack kosong." << endl;
    } else {
        cout << stackArr[top] << " removed successfully." << endl;
        top--;
    }
}

void peek() {
    if (top == -1){
        cout << "Stack kosong." << endl;
    } else {
        cout << "Top element: " << stackArr[top] << endl;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack kosong." << endl;
    } else {
        cout << "Stack: ";
        for  (int i = top; i >= 0; i--) {
            cout << stackArr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice = 0;
    int value;
    
    while (choice != 5) {
        cout << "\n == STACK MENU ==" << endl;
        cout << "1. Push 2. Pop 3. Peek" << endl;
        cout << " 4. Display 5. Exit" << endl;
        cout << "\nChoose operation: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;
            push(value);
        } else if (choice == 2) {
            pop();
        } else if (choice == 3) {
            peek();
        } else if (choice == 4) {
            display();
        } else if (choice == 5) {
            cout << "Program selesai." << endl;
        } else {
            cout << "Pilihan tidak valid." << endl;
        }
    }
    return 0;
}