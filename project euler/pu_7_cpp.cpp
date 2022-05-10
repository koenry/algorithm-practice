#include <iostream>
using namespace std;


int main() {
    int mainNum1 = 2;
    int mainNum2 = 2;
    int primeNum = 0;

    while (primeNum <= 10001) { // which prime number
        
        if (mainNum1 == mainNum2) {
            cout << mainNum1 << '\n';
            primeNum++;
            mainNum1++;
            mainNum2 = 2;
        }
        else if  (mainNum1 % mainNum2 == 0) { 
            mainNum1++;
            mainNum2 = 2;   
        } 
        mainNum2++;
    }  

    cout << mainNum1 - 1; // because we increment in the if/else
    return 0;
}

