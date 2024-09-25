//ternary statements
#include <iostream> // include this header for cout and endl
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    // Print whether the number is positive or negative
    cout << (n >= 0 ? "positive" : "negative") << endl;
    
    return 0; // corrected return statement
}