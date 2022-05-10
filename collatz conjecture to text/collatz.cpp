#include <iostream>
#include <fstream>
using namespace std;


int main() {
	
	std::ofstream outfile;
    outfile.open("test.txt", std::ios_base::app); 
	outfile << "Number" << ',' << "Counter" << '\n';
	outfile.close();
    long long int main = 1;
    long long int a = 1;
    long long int counter = 0;
   
    while (a > 0) { //true
         if ( a == 1) {
            cout <<  main << ' ' << counter <<'\n';
			std::ofstream outfile;
			outfile.open("test.txt", std::ios_base::app); 

			 
			outfile << main << ',' << counter << '\n';
            main++;
            a = main;
            counter = 0;
        }
        else if (a % 2 == 1) {
            a = a * 3 + 1;
            counter++;
        }
      
        else if (a % 2 == 0) {
            a = a / 2;
            counter++;
        }
    }
    
        
        return 0;
}

