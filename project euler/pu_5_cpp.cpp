#include <iostream>
using namespace std;

int main() {
    int i = 20;
    int a = 20;
    while (i > 1) {   
        if (a % i == 0) {
            i--;
            }
        else {
            a++;
            i = 20;
            }
    }
    cout << a;
    return 0;
}
