// Simple Calculator
// Author: Agni Mondol Arpon
#include <iostream>
using namespace std;

int main() {
    
    int a, b;
    int choice;
    
    // user input 
    
    cout << "Enter your First number:" ;
    cin >> a ;
    
    cout << "\n" << "Enter your second number:" ;
    cin >> b ;
    
    // choice 
    
    cout << "\nSelect operation:\n";
    
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division\n" ;
    
    cout << "\nEnter choice:" ;
    cin >> choice;
    
    // operation processing: 
    
    switch(choice) {
        
        case 1:
            cout << "\nResult = " << ( a + b);
            break;
        case 2:
            cout << "\nResult = " << (a - b) ;
            break;
        case 3:
            cout << "\nResult = " << (a * b );
            break;
        case 4:
            if (b != 0) {
                cout << "\nResult = " << (a / b);
            } else {
                cout << "\nCan't divided by 0" ;
            }
            break;
        default :
            cout << "\nInvalid choice !";
    }
    
}
