#include <iostream>

using namespace std;

int MAXSIZE = 8;
int stack[8];
int top = -1;

bool isEmpty() {
  return (top == -1);
}

bool isFull() {
  return (top == MAXSIZE - 1);
}

int peek() {
  return stack[top];
}

int pop() {
  int data;
  if (!isEmpty()) {
    data = stack[top--];
    return data;
  } else {
    cout << "Could not retrieve data, Stack is empty." << endl;
  }
}

bool push(int data) {
  if (!isFull()) {
    top++;
    stack[top] = data;
    return true;
  } else {
    cout << "Could not insert data, Stack is full." << endl;
    return false;
  }
}

int main() {
  // push items onto the stack
  push(3);
  push(5);
  push(9);
  push(1);
  push(12);
  push(15);

  cout << "Element at top of the stack: " << peek() << endl;
  cout << "Elements: ";

  while (!isEmpty()) {
    int data = pop();
    cout << data << endl;
  }

  return 0;
}