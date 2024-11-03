#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    bool isPrime = true;

    cout << "Введіть число: ";
    cin >> number;
    if (number < 2) {
        isPrime = false;
    } else {
        for (int i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << number << " є простим числом." << endl;
    } else {
        cout << number << " не є простим числом." << endl;
    }
    return 0;
}
