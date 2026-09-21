#include <iostream>
#include <clocale>

int main() {
    setlocale(LC_ALL, "RU");

    // Ставим точность вывода 10 знаков после запятой,
    // чтобы увидеть разницу между float и double
    std::cout.precision(10);

    // ============================================
    // БЛОК А. Одна формула — двумя типами
    // ============================================
    std::cout << "=== Блок А: float vs double ===\n";

    // Считаем (0.1 + 0.2) двумя типами.
    // Суффикс 'f' делает число типом float.
    float  sum_f = 0.1f + 0.2f;
    double sum_d = 0.1 + 0.2;

    std::cout << "float:  " << sum_f << "\n";
    std::cout << "double: " << sum_d << "\n\n";

    // ============================================
    // БЛОК Б. Накопление погрешности
    // ============================================
    std::cout << "=== Блок Б: сложение 0.1 миллион раз ===\n";

    // Два счётчика: float и double
    float  total_f = 0.0f;
    double total_d = 0.0;

    // Цикл на 1 000 000 итераций
    for (int i = 0; i < 1000000; ++i) {
        total_f += 0.1f;   // float-сложение
        total_d += 0.1;    // double-сложение
    }

    std::cout << "float:  " << total_f << "\n";
    std::cout << "double: " << total_d << "\n";

    return 0;
}