#include <iostream>
using namespace std;

int main() {
    int arr[10] = {5, 8, 12, 3, 19, 21, 7, 14, 6, 10};
    int value;
  
    cout << "Введіть значення для пошуку: ";
    cin >> value;

    int index = -1;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == value) {
            index = i; 
            break; 
        }
    }

    if (index != -1) {
        cout << "Значення " << value << " знайдено на індексі " << index << "." << endl;
    } else {
        cout << "Значення " << value << " не знайдено в масиві." << endl;
    }

    return 0;
}

