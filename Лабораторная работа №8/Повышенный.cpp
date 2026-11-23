#include <iostream>
#include <string>
#include<windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string text;
    cout << "Введите строку: ";
    cin >> text;

    string result = "";

    for (int i = 0; i < text.length(); i++) {
        int count = 1;

        // Считаем количество одинаковых символов подряд
        while (i + 1 < text.length() && text[i] == text[i + 1]) {
            count++;
            i++;
        }

        // Добавляем символ и количество повторений
        result += text[i];
        result += to_string(count);
    }

    cout << "Сжатая строка: " << result << endl;

    return 0;
}