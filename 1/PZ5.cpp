#include <iostream>
#include <string>
#include <algorithm> // Для функції transform
using namespace std;

// Функція для порівняння двох каталогів
bool compareDirectories(const string& dir1, const string& dir2) {
    // Копіюємо каталоги для обробки
    string dir1_copy = dir1;
    string dir2_copy = dir2;

    // Перетворюємо всі символи каталогів у нижній регістр
    transform(dir1_copy.begin(), dir1_copy.end(), dir1_copy.begin(), ::tolower);
    transform(dir2_copy.begin(), dir2_copy.end(), dir2_copy.begin(), ::tolower);

    // Перевіряємо, чи закінчуються каталоги символом '\'
    if (dir1_copy.back() == '\\')
        dir1_copy.pop_back();
    if (dir2_copy.back() == '\\')
        dir2_copy.pop_back();

    // Порівнюємо каталоги
    return dir1_copy == dir2_copy;
}

int main() {
    string directory1 = "C:\\Users\\Acer\\Documents\\";
    string directory2 = "c:\\USERS\\ACER\\DOCUMENTS";

    if (compareDirectories(directory1, directory2)) {
        cout << "The catalogs are identical." << endl;
    }
    else {
        cout << "The catalogs are different." << endl;
    }

    return 0;
}
