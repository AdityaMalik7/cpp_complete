#include <iostream>
using namespace std;

int main() {
  /*int a;
  cout << "Enter a number:" << endl;
  cin >> a;

  if (a > 0) {
    cout << "A is  positive number." << endl;
  } else {
    cout << "not a valid number" << endl;
  }*/

  // ELSE-IF
  int a;
  cout << "Enter a number:" << endl;
  cin >> a;

  if (a > 0) {
    cout << "A is positive Number." << endl;
  } else if (a < 0) {
    cout << "A is negative number." << endl;

  } else {
    cout << "A is 0." << endl;
  }

  return 0;
}
