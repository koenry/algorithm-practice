#include <iostream>
using namespace std;

int main() {

    int i = 1;
    int a = 0;
    int b = 0;
    while (i < 101) {   
        a = a + i;
        b = b + i*i;
        i++;
    }
    cout << a*a - b;
    return 0;
}
