#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void toUpper(string& str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    string str;

    cout << "Введите строку: ";
    getline(cin, str);

    toUpper(str);

    cout << "Результат: " << str << endl;

    return 0;
}