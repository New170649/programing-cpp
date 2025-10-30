#include <iostream>
using namespace std;
int main()
{
    char op;
    double num1;
    double num2;
    double result;

    cout << "*********** CALCULATOR ***********\n";

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter #1: ";
    cin >> num1;
    cout << "Enter #2: ";
    cin >> num2;

    switch (op)
    {
      case '+':
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result << endl;
        break;
      case '-':
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result << endl;
        break;
      case '*':
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result << endl;
        break;
      case '/':
         result = num1 / num2;
        cout << num1 << " / " << num2 << " = " << result << endl;
        break;
      default:
        cout << "Error! operator is not correct" << endl;
    }


    cout << "**********************************\n";

    return 0;
}
