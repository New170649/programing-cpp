#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    //cin >> number;
    //number = 12;
    //number = -35;
    number = 0;
    if (number < 0) {
        cout << "Negative number" << endl;
    } else if (number > 0) {
        cout << "Positive number" << endl;
    } else {
        cout << "Zero" << endl;
    }
    if (number % 2 == 0) {
        cout << "Even number" << endl;
    } else {
        cout << "Odd number" << endl;
    }
    return 0;
}