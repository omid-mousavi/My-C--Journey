#include <iostream>
using namespace std;
bool finder(int n, int yourNum) {
  int matrix[n][n];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout << "enter your element: ";
      cin >> matrix[i][j];
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(matrix[i][j] == yourNum) {
        return true;
      }
    }
  }
  return false;
}
int main() {
  int n, yourNum;
  cout << "Enter the number of matrix length: ";
  cin >> n;
  cout << "What number you are looking for? ";
  cin >> yourNum;
  cout << "Found: " << finder(n, yourNum);
  return 0;
}