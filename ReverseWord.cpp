#include <iostream>
using namespace std;

char stackArr[100];
int top = -1

void push(char c) {
    if (top == 99) {
        cout << "Stack overflow!" << endl;
    } else {
        top++;
        stackArr[top] = c;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack underflow!" << endl;
    } else {
        top--;
    }
}

int main() {
    char word[100];
    cout << "Enter a word: ";
    cin >> word;
    
    for (int i = 0; word [i] != '\0' = i++)
    push(word[i]);
}

cout << "\nOriginal word: " << word << endl;
cout << "Reversed word: ";

while (top != -1) {
    pop();
}
cout << endl;
return 0;
}