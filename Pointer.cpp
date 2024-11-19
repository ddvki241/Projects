#include <iostream>
using namespace std;

int main() {
    int variable = 12;

    int* pointer = &variable;

    int** pointerToPointer = &pointer;

    cout << "Значення змінної безпосередньо: " << variable << endl;
    cout << "Значення змінної через вказівник: " << *pointer << endl;
    cout << "Значення змінної через вказівник на вказівник: " << **pointerToPointer << endl;

    return 0;
}
