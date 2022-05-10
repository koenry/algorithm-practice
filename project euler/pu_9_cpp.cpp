#include <iostream>
using namespace std;
#include <cmath>


int main() {
     int a = 3;
     int b = 4;
     int c = 0;

   
    while (true) {
        c = a*a + b*b; 
        c = sqrt(c);

        if (a+b+c == 1000 && a*a+b*b == c*c) {
            cout << a*b*c;
            break;
        }
	else if (b > 496 ) { // lowest c value would be 501 and lowest a values would be 3 so 1000-504
		a++;
		b = a;
	}
	
	b++;
       
    }
   
    
        
        return 0;
}

