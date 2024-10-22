#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Введіть номер місяця (1-12): ";
    cin >> month;

    switch (month) {
        case 1: case 2: case 3:
            cout << "Перший квартал" << endl;
            break;
        case 4: case 5: case 6:
            cout << "Другий квартал" << endl;
            break;
        case 7: case 8: case 9:
            cout << "Третій квартал" << endl;
            break;
        case 10: case 11: case 12:
            cout << "Четвертий квартал" << endl;
            break;
        default:
            cout << "Неправильний номер місяця" << endl;
    }

    return 0;
}