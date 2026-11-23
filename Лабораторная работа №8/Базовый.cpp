#include <iostream>
#include <string>   // ОБЯЗАТЕЛЬНО: подключаем библиотеку для работы со строками
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string text;
    cout << "Введите строку: ";

    // Используем getline, а не cin, чтобы прочитать строку с пробелами целиком
    getline(cin, text);

    int count = 0; // Копилка (счетчик) для символов 'a'. Начинаем с нуля

    // Идем циклом от 0 до конца строки (text.length() возвращает количество символов)
    for (int i = 0; i < text.length(); i++) {

        // text[i] — это конкретный символ строки под номером i (как в массиве)
        if (text[i] == 'a' || text[i] == 'а') {
            count++; // Если символ равен 'a', добавляем 1 в копилку
        }
    }

    cout << "Количество символов 'a': " << count << endl;

    return 0;
}