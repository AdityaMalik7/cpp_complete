#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a number:" << endl;
  cin >> n;

  int i = 2;
  while (i < n) {
    if (n % i == 0) {
      cout << "Not prime for : " << i << endl;

    } else {
      cout << "Prime Number for :" << i << endl;
    }

    i += 1;
  }
  return 0;
}
