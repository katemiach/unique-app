#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <locale>

using namespace std;

int main() {
    vector<string> lines = { "asdfg", "wert", "vbnm", "hjk", "tyuio" };

    // Створення локалі для коректного порівняння рядків
    locale loc("");

    // Сортування рядків у порядку зростання з використанням std::sort та локалі
    sort(lines.begin(), lines.end(), [&](const string& a, const string& b) {
        return locale(loc).operator()(a, b);
        });

    cout << "Sorted lines (unknown encoding):" << endl;
    for (const string& line : lines) {
        cout << line << endl;
    }

    return 0;
}