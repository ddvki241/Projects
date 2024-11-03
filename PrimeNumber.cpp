#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    bool isPrime = true;

    cout << "Введіть число: ";
    cin >> number;

    // Числа менше 2 не є простими
    if (number < 2) {
        isPrime = false;
    } else {
        // Перебираємо можливі дільники від 2 до кореня числа
        for (int i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Виводимо результат
    if (isPrime) {
        cout << number << " є простим числом." << endl;
    } else {
        cout << number << " не є простим числом." << endl;
    }

    return 0;
}
