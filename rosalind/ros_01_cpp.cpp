#include <iostream>
using namespace std;


int main() {
    int  a = 0;
    int  c = 0;
    int  g = 0;
    int  t = 0;
    string checker;
    string dna = "GGTTGTCATAGTGTTTCGTTCGCGGTACCGATTGCGCGAGGTCTCAGAGGGCTAACCATGTCGCTTAGGCACAGATTGAATCAAGCGCTGACCGGCGTGCGACCTCGATCAATCACCCCTTACTCCTCTTCTAGGCACTGGGCATGCACTAACCTCGATCCATGACGATATTTCTGTGGCGTCGTTTGCAGTGCCAATGATAAAGAGATAACTGTTATTGGCTGTCATGAGATAACGATGGCGACTGTTGAGGCAGTGCTCGTCACAGCATGCACAATAAGAGGGAGTCCCCGAGAGTTCGACCCGGATGTGTGAAAGGTACATTGCCCACCGTGTCACAGAATGGCCACACTCAGGGTCCCATATTTTGGCGACTAAGCAGCCTTTTGCGGAGCCGTCTCTAGGGACCCTTCAGTGACCCCAACACTAACTGGGCGTTAGAACGTGCGTGCACCTTCATTTCGCGTTTGCTTAAATTCTATGGTTCTGCGGCGTAACTTAGCGGCTGTACTTAAGGATAGTTACGGTTCTAACACCTGCTCGCAGTCCTTGATATAGTGTATCGCCAGGCACGTCGCGCGGCGCGAAATCAAGCAATTTTAAATCTTCTTTTTTATGCTGCGATCCTGTGGTCCTGAGCTGTTATGAAATACTAAGGGTAACCTGCGAATTTCGAAAGTGACCCGGTCAGCCGCAATGCATGATTAGCAGGTTAATTCCGTGTTGGAGGAGCAATATTACAGTTTGATGACAATACCGATGGTGACCTGCGACTTGTTAACCGTCAGGCAAAGTGCGCCGGCGTGGCGTCCTAATTCAAATCCACGTTGTGTTTATTGCTATGGGATTAAGGTTGTCATTTCGTCAATCCTAGCATCCAAGAGTAGTCCGTTGCAGATTGATGCTCTTCAGATGGGTCGTGTGCACGTCAGT";

    
    for(int i = 0; i < dna.length(); i++) {
       
        checker = dna[i];
        if (checker == "A") {
            a++;
            string checker;
        }
        else if (checker == "C") {
            c++;
            string checker;
        }
        else if (checker == "G") {
            g++;
            string checker;
        }
        else if (checker == "T") {
            t++;
            string checker;
        } 
   }
   cout << a << ' ' << c << ' ' << g << ' ' << t << ' ';
   return 0;
}


