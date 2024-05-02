#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<string> lines = { "sgf", "advzc", "zfbvxc", "dvxc", "sbdfxxc" };

    // Сортування рядків у порядку зростання з використанням std::sort
    sort(lines.begin(), lines.end());

    cout << "Sorted lines (ASCII/Unicode):" << endl;
    for (const string& line : lines) {
        cout << line << endl;
    }

    return 0;
}