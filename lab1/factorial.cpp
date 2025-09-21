#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1; 

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Error: Please enter a non-negative integer." << endl;
        return 0;
    }

    if (n == 0) {
        cout << "The factorial is: 1" << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "The factorial is: " << factorial << endl;

    return 0;
}
