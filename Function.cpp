#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number) {
    if (number < 2) {
        return false;
    }

    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false; 
        }
    }
    
    return true; 
}

int main() {
    int number;
    cout << "Введіть число: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " є простим числом." << endl;
    } else {
        cout << number << " не є простим числом." << endl;
    }

    return 0;
}

