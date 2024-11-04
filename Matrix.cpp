#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    int matrix[SIZE][SIZE] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36}
    };

    cout << "Елементи на головній діагоналі: ";
    for (int i = 0; i < SIZE; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    cout << "Елементи на побічній діагоналі: ";
    for (int i = 0; i < SIZE; i++) {
        cout << matrix[i][SIZE - i - 1] << " ";
    }
    cout << endl;

    return 0;
}
