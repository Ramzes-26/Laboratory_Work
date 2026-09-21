#include <iostream>
#include <clocale>
int main() {
    setlocale(LC_ALL, "RU");
    std::cout << "Калькулятор объёма и площади поверхности куба";
    double a;
    std::cout << "\nВведите ребро куба: ";
    std::cin >> a;
    if (a > 0) {
        std::cout << "Объём: " << a * a * a << "\n";
        std::cout << "Площадь поверхности: " << 6 * a * a;
    }
    else {
        std::cout << "Введите корректные данные!";
    }
    return 0;
}