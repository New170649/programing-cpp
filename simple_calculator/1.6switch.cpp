#include <bits/stdc++.h>
using namespace std;

int main() {
    char op;
    double a, b, result;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (op) {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        cout << "Error! Operator is not correct";
        result = -DBL_MAX;
    }

    if (result != -DBL_MAX)
        cout << a << " " << op << " " << b << " = " << result << endl;
    return 0;
}