#include <iostream>
using namespace std;

int main() {
  char a;
  cout << "Enter a value" << endl;
  cin >> a;

  if (a >= 'a' && a <= 'z') {
    cout << "Lower Case" << endl;
  } else if (a >= 'A' && a <= 'Z') {
    cout << "Upper Case" << endl;
  }

  else if (a >= '0' && a <= '9') {
    cout << "Numeric Value between 0 to 9" << endl;
  } else {
    cout << "Invalid" << endl;
  }
  return 0;
}
