#include <iostream> 
#include <string>
#include <chrono>


 

using namespace std;
using namespace std::chrono; // 
int main() {
    auto start = high_resolution_clock::now(); //

    long int a = 999, b = 999;
    string palindrome, palindrome2;
    int c = 0, counter = 0;
    bool loopz = true;

    while(loopz == 1) {
        string palindrome2;
        
        c = a * b;
        palindrome = std::to_string(c);
        long int leng = palindrome.size();
    
        for (int i = 1; i <= leng; i++) {
            palindrome2 = palindrome2 + palindrome[leng - i];
            
            if (palindrome2 == palindrome) {
                cout << c << '\n';
                loopz = false; // break wont work because of scopes
                
            }
        }
    counter++;
    b--;   
    // my first mistake was going integer down thing is its going to stop at 999x1 so we get everything like this! 
    if (counter > 9) {
        a--;
        b = b+10;
        counter = 0;
    }
    }
    _sleep(50);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    float ok = duration.count() / 1000000.0;
    cout << ok;
    cout << "Time taken by function: "
         << ok << " seconds" << endl;
}
