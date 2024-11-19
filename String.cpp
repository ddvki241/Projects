#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;

    cout << "Введіть рядок: ";
    getline(cin, str);

    cout << "Введіть символ: ";
    cin >> ch;

    size_t position = str.find(ch);

    if (position != string::npos) {
        cout << "Символ '" << ch << "' знайдено на позиції " << position + 1 << " (нумерація з 1)." << endl;
    } else {
        cout << "Символ '" << ch << "' не знайдено в рядку." << endl;
    }

    return 0;
}
