#include <iostream>
using namespace std;

int main() {
    long long int a = 600851475143;
    int b = 2;
    while ( a > 2) {
        if (a % b == 0) {
            a = a / b;
            cout << b;
            cout << '\n';
            b = 2;
            }
        b++;
	
  }
 
  return 0;
}
