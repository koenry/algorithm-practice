#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int a = 0;
    while ( i < 1000) {
        if (i % 5 == 0 || i % 3 == 0) {
            a++;
            }
	i++;
  }
  cout << a;
  return 0;
}
