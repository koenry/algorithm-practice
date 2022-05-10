#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
    while ( a < 1000) {
        cout << a;
        cout << '\n';
        cout << b;
        cout << '\n';
        a = a + b;
        b = b + a ;
  }
  return 0;
}
