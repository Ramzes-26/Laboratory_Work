#include <iostream>
#include <clocale>
#include <iomanip>   // для std::hex, std::oct, std::dec

int main() {
    setlocale(LC_ALL, "Russian");

    std::cout << "Конвертер систем счисления!\n";

    int number, base;

    // Ввод числа
    std::cout << "Введите число от 0 до 255: ";
    std::cin >> number;

    // Проверка диапазона
    if (number < 0 || number > 255) {
        std::cout << "Ошибка: число должно быть от 0 до 255!\n";
        return 1;
    }

    // Ввод системы счисления
    std::cout << "Выберите систему счисления (2, 8, 10, 16): ";
    std::cin >> base;

    // Проверка системы
    if (base != 2 && base != 8 && base != 10 && base != 16) {
        std::cout << "Ошибка: неверная система счисления!\n";
        return 1;
    }

    std::cout << "Число " << number << " в системе " << base << ": ";

    if (base == 2) {
        // Двоичная система — своя логика
        // Собираем биты в массив, потом выводим в обратном порядке
        int bits[8];       // максимум 8 бит для числа до 255
        int count = 0;     // сколько бит получилось
        int temp = number; // копия, чтобы не портить оригинал

        // Если число 0 — выводим просто 0
        if (temp == 0) {
            std::cout << "0\n";
        }
        else {
            // Делим на 2 и собираем остатки
            while (temp > 0) {
                bits[count] = temp % 2;   // остаток от деления на 2
                temp = temp / 2;          // делим на 2
                count++;
            }

            // Выводим остатки в обратном порядке
            for (int i = count - 1; i >= 0; i--) {
                std::cout << bits[i];
            }
            std::cout << "\n";
        }
    }
    else if (base == 8) {
        std::cout << std::oct << number << std::dec << "\n";
    }
    else if (base == 10) {
        std::cout << std::dec << number << "\n";
    }
    else if (base == 16) {
        std::cout << std::hex << number << std::dec << "\n";
    }

    return 0;
}