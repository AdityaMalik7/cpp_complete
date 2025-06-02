#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a number" << endl;
  cin >> n;

  /*int i = 1;
  while (i <= n) {
    cout << i << " ";
    i += 1;
  }*/
  int sum = 0;
  int i = 2;
  while (i <= n) {
    sum += i;
    cout << i << " ";
    i += 2;
  }
  cout << "Sum is :" << sum << endl;
  return 0;
}
