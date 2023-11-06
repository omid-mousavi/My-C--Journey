#include <iostream>
#include <ctime>
using namespace std;


int main() {
  double duration;
  int i, j, n = 1000;
  int arrOne[n][n];
  int arrTwo[n][n];
  int arrThree[n][n];
  clock_t firstProgramStart = clock();
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      arrOne[i][j] = 0;
    }
  }
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      arrTwo[i][j] = 1;
    }
  }
  clock_t firstProgramEnd = clock();
  duration = double(firstProgramEnd - firstProgramStart) / CLOCKS_PER_SEC;
  cout << "It took " << duration << " seconds" << endl;
  clock_t secondProgramStart = clock();
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      arrThree[i][j] = arrOne[i][j] + arrTwo[i][j];
    }
  }
  clock_t secondProgramEnd = clock();
  duration = double(secondProgramEnd - secondProgramStart) / CLOCKS_PER_SEC;
  cout << "It took " << duration << " seconds" << endl;
  return 0;
}