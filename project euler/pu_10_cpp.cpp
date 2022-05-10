#include <iostream>
#include <vector>
#include <chrono>
#include <cmath>
using namespace std;
using namespace std::chrono; // 

int main() {
    auto start = high_resolution_clock::now(); //

    long long int sumAll = 0;
    long long int w = 0;
    vector<long long int> vect;

    vect.push_back(2);
   
    long long int testNumb = 0;

    for (long long int i = 3; i <= 2000000; i++) {
         while ( w < sqrt(i) + 1 ) {  
            testNumb = i % vect[w];
            w++;
            if (testNumb == 0 || vect[w] > i / 2) {
                break;
            }      
        }  
        
    if (testNumb > 0)  {
            vect.push_back(i);  
            sumAll = sumAll + i;
             }  
     w = 0;

 }
    cout << sumAll+2 << '\n';

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    float timer = duration.count() / 1000000.0;
    cout << "Time taken by function: "
         << timer << " seconds" << endl;
}