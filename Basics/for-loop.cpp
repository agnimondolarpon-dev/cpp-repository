// For loop 
// Author: Agni Mondol Arpon
#include <iostream>
using namespace std;

int main() {
    
    // chapter 1: for loop
    
    cout << "Chapter 1:For loop\n" ;
    
    // Print number:
    cout << "\n# Print number 0 to 5 \n";
    
    for ( int i = 0;i <= 5; i++) {
    cout << "\n" << i << "\n";
    }
    
    // Even number and Odd number:
    
   cout << "\n# Even number 0 to 10" << "\n";
    
   for ( int e = 0 ; e < 11 ; e += 2) {
       cout << "\n" << e << "\n" ;
   }
   
   cout << "\n# Odd number 0 to 10 \n ";
   
   for ( int o = 1 ; o < 10 ; o += 2 ) {
       cout << "\n" << o << "\n" ;
   }
   
   // # sum of number:
   
   cout << "\n# Sum of number" << "\n" ;
   
   int sum = 0;
   
   for ( int s = 0 ; s <= 5 ; s++ ) {
       sum = sum + s ;
   }
   
   cout << "\nThe sum of 0 to 5 is " << sum << "\n";
   
   // Chapter 2: Nested For loop
   
   cout << "\nChpater 2:Nested For Loop\n";
   
   // Nested Loops
   
   cout << "\n# Nested loop\n" ;
   
   for (int a = 1 ; a <= 2 ; a++) { // Outer loop
       cout << "\nOuter loop " << a << "\n";
       for ( int b = 1 ; b <= 3 ; b++) { // Inner loop
           cout << "\n    Inner loop " << b << "\n" ;
       }
   }
   
   // multiplication table 
   
   cout << "\n# Multiplication table \n" ;
   cout << "\n" ;
   
   for (int p = 1 ; p <= 3 ; p++) {
       for (int q = 1 ; q <= 3 ; q++) {
           cout << p * q << " " ;
       }
       cout << "\n" ;
   }
   
   return 0;
}
    
