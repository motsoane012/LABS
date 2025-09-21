#include <iostream>
using namespace std;

int main() {
    int litres;
    int makopokopo, remainder;

    cout << "Enter quantity in litres: ";
    cin >> litres;

    makopokopo = litres / 20;
    remainder = litres % 20;

    cout << "Number of makopokopo (20L): " << makopokopo << endl;
    cout << "Remaining litres: " << remainder << endl;

    return 0; 
}
