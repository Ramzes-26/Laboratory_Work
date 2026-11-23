#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string text;
    cout << "Введите строку: ";
    getline(cin, text);

    string result = "";

    for (int i = 0; i < text.length(); i++) {
        if (text[i] != ' ') {
            result += text[i];
        }
    }

    cout << "Строка без пробелов: " << result << endl;

    return 0;
}