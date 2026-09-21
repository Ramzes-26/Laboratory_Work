#include <iostream>
#include <clocale>
#include <limits>   // для numeric_limits

// Функция безопасного ввода дробного числа.
// Если пользователь введёт букву — попросит заново.
double readNumber(const char* prompt) {
    double value;
    while (true) {
        std::cout << prompt;
        std::cin >> value;

        if (std::cin.fail()) {
            // Ввод сломался — очищаем и пробуем снова
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка! Введите число заново.\n";
        }
        else {
            // Всё ок — возвращаем число
            return value;
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    std::cout << "=== Проверка ввода ===\n";

    // Просим два числа через безопасную функцию
    double a = readNumber("Введите первое число: ");
    double b = readNumber("Введите второе число: ");

    std::cout << "Сумма: " << a + b << "\n";

    return 0;
}