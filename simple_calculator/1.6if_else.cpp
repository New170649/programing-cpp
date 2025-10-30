#include <bits/stdc++.h>
using namespace std;

int main() {
    char op;
    double a, b, result;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (op == '+') {
        result = a + b;
    } else if (op == '-') {
        result = a - b;
    } else if (op == '*') {
        result = a * b;
    } else if (op == '/') {
        result = a / b;
    } else {
        cout << "Error! Operator is not correct";
        result = -DBL_MAX;
    }
    
    if (result != -DBL_MAX)
        cout << a << " " << op << " " << b << " = " << result << endl;
    return 0;
}