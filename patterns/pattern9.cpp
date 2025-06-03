#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a value:";
  cin >> n;

  int i = 1;
  while (i <= n) {
    int j = 0;
    while (j < i) {
      cout << j + i << " ";
      j += 1;
    }
    cout << endl;
    i += 1;
  }
  return 0;
}
