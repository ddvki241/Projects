#include <iostream>
using namespace std;
int main() {
    double a, b, x;
    cout << "Число a: ";
    cin >> a;
    cout << "Число b: ";
    cin >> b;
    if (a == 0) {
        cout << "Помилка: параметр a не може дорівнювати 0." ;
        return 1;
    }
    x = -a * (b + 12) / 2;
    cout << "x = " << x ;
    return 0;
}
