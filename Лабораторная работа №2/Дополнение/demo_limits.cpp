#include <iostream>
#include <clocale>
#include <limits>   // для INT_MAX / INT_MIN

int main() {
    setlocale(LC_ALL, "RU");
    std::cout.precision(15);

    std::cout << "=== Граничные значения ===\n\n";

    // Тест 1: Ноль
    int a1 = 0, b1 = 0;
    double avg1 = (static_cast<double>(a1) + b1) / 2.0;
    std::cout << "0 и 0:               " << avg1 << "\n";

    // Тест 2: Отрицательные
    int a2 = -5, b2 = -3;
    double avg2 = (static_cast<double>(a2) + b2) / 2.0;
    std::cout << "-5 и -3:             " << avg2 << "\n";

    // Тест 3: INT_MAX — тут static_cast спасает от переполнения!
    int a3 = INT_MAX, b3 = INT_MAX;
    double avg3 = (static_cast<double>(a3) + b3) / 2.0;
    std::cout << "INT_MAX и INT_MAX:   " << avg3 << "\n";

    // Тест 4: INT_MIN
    int a4 = INT_MIN, b4 = INT_MIN;
    double avg4 = (static_cast<double>(a4) + b4) / 2.0;
    std::cout << "INT_MIN и INT_MIN:   " << avg4 << "\n";

    // Тест 5: Длинные дроби
    double a5 = 0.123456789, b5 = 0.987654321;
    double avg5 = (a5 + b5) / 2.0;
    std::cout << "0.123456789 и 0.987654321: " << avg5 << "\n";

    return 0;
}