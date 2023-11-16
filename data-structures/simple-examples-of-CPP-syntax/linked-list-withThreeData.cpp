// this example shows a linked list using struct with 10, 15, 20 as their data
#include <iostream>
using namespace std;

struct Node {
  int Data;
  Node *Next;
};
int main() {
  Node *dyn, *listOne;
  dyn = new Node; // creating first node
  listOne = dyn;
  dyn -> Data = 10; // set 10 to first Node which is listOne
  dyn = new Node; // creating second node
  dyn -> Data = 15;
  listOne -> Next = dyn; // we set the second list address to first node (Next)
  dyn = new Node; // the third node
  dyn -> Data = 20;
  dyn -> Next = NULL;
  listOne -> Next -> Next = dyn;
  cout << "First node data is " << listOne -> Data << endl;
  cout << "Second node data is " << listOne -> Next -> Data << endl;
  cout << "Third node data is " << listOne -> Next -> Next -> Data/*you can also use dyn -> Data*/ << endl;
  return 0;
}