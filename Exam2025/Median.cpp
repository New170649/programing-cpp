#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c, d, e;
    cout << "Enter five integers: ";
    cin >> a >> b >> c >> d >> e;

    if (a > b) {
        swap(a, b);
    }
    if (c > d) {
        swap(c, d);
    }
    if (a > c) {
        swap(b, d);
        c = a;
    }
    if (a == e) {
        
    }
    if (a > b) {
        swap(a, b);
    }
    if (c > a) {
        swap(b, d);
        a = c;
    }
    if (a > d) {
        cout << "Result: " << d << endl;
    } else {
        cout << "Result: " << a << endl;
    }

    return 0;
}
