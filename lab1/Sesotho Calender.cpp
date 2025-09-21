#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    string days[] = {
        "Mantaha",   
        "Labobeli",  
        "Laboraro",  
        "Labone",    
        "Labohlano", 
        "Moqebelo", 
        "Sontaha"    
    };

    cout << "Enter a number (1-7): ";
    cin >> num;

    if (num < 1 || num > 7) {
        cout << "Error: Invalid input. Please enter 1-7." << endl;
    } else {
        cout << days[num - 1] << endl;
    }

    return 0;
}
