#include <iostream>
using namespace std;
struct Node {
  int data;
  Node *next;
};
int yourInput() {
  int n;
  cout << "Enter your number: ";
  cin >> n;
  if(n > 1) {
    return n;
  } else {
    cout << "Invalid!";
  }
}
int sumResult(Node *current) {
  int sum = 0;
  while(current != nullptr) {
    sum += current -> data;
    current = current -> next;
  }
  return sum;
}
int main() {
  int n, i;
  Node *head, *tail;
  n = yourInput();
  tail = new Node;
  tail -> data = 1;
  head = tail;
  for(i = 2; i <= n; i++) {
    tail -> next = new Node;
    tail = tail -> next;
    tail -> data = i;
  }
  tail -> next = NULL;
  cout << "Sum is " << sumResult(head) << endl;
  return 0;
}