#include <iostream>
using namespace std;
int main() {
    char op;
    float A, B;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> A >> B;
    switch (op) {
        case '+':
            cout << A << " + " << B << " = " << A + B << endl;
            break;
        case '-':
            cout << A << " - " << B << " = " << A - B << endl;
            break;
        case '*':
            cout << A << " * " << B << " = " << A * B << endl;
            break;
        case '/':
            cout << A << " / " << B << " = " << A / B << endl;
            break;
        default:
            cout << "Error! operator is not correct" << endl;
            break;
    }
    return 0;
}