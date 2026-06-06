// Rectangular Parallelopiped Area and Volume Calculator
// Author: Agni Mondol Arpon

#include <iostream>
using namespace std;

int main() {

    int l, w, h;
    int area, volume;

    cout << "Rectangular Parallelopiped's Area and Volume Calculator" << "\n" << endl;

    cout << "Enter the length: ";
    cin >> l;
    cout << "\n";

    cout << "Enter the width: ";
    cin >> w;
    cout << "\n";

    cout << "Enter the height: ";
    cin >> h;
    cout << "\n";

    area   = 2 * ((l * w) + (w * h) + (h * l));
    volume = l * w * h;

    cout << "l = " << l << ", w = " << w << ", h = " << h << "\n" << endl;

    cout << "Area = 2 x ((l x w) + (w x h) + (h x l))" << endl;
    cout << "     = 2 x ((" << l << " x " << w << ") + ("
         << w << " x " << h << ") + ("
         << h << " x " << l << "))" << endl;
    cout << "     = " << area << "\n" << endl;

    cout << "Volume = l x w x h" << endl;
    cout << "       = " << l << " x " << w << " x " << h << endl;
    cout << "       = " << volume << endl;

    return 0;
}
