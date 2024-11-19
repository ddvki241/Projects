#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>
using namespace std;

void printTable(const vector<vector<string>>& data) {
    vector<size_t> columnWidths;
    for (const auto& row : data) {
        if (columnWidths.size() < row.size()) {
            columnWidths.resize(row.size(), 0);
        }
        for (size_t i = 0; i < row.size(); ++i) {
            columnWidths[i] = max(columnWidths[i], row[i].length());
        }
    }
    for (const auto& row : data) {
        for (size_t i = 0; i < row.size(); ++i) {
            cout << setw(columnWidths[i] + 2) << left << row[i];
        }
        cout << endl;
    }
}

int main() {
    string fileName = "import_contact_csv.csv";
    ifstream file(fileName);

    if (!file.is_open()) {
        cerr << "Не вдалося відкрити файл: " << fileName << endl;
        return 1;
    }

    vector<vector<string>> data;

    string line;
    while (getline(file, line)) {
        vector<string> row;
        stringstream ss(line);
        string cell;

        while (getline(ss, cell, ',')) {
            row.push_back(cell);
        }
        data.push_back(row);
    }
    file.close();

    printTable(data);

    return 0;
}
