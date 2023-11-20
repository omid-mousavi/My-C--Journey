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
void evenNums(Node *current) {
  while(current != nullptr) {
    if(current -> data % 2 == 0) {
      current -> data = 0;
    }
    current = current -> next;
  }
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
  evenNums(head);
  return 0;
}
