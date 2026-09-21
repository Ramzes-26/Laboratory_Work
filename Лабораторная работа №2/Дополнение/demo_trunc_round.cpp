#include <iostream>
#include <clocale>
#include <cmath>   // нужно для std::round

int main() {
    setlocale(LC_ALL, "RU");

    std::cout << "=== Усечение vs округление ===\n\n";

    // Берём положительное число
    double value = 3.7;

    // УСЕЧЕНИЕ: static_cast<int> просто отбрасывает дробную часть.
    // 3.7 -> 3
    std::cout << "static_cast<int>(3.7)          = " << static_cast<int>(value) << "\n";

    // ОКРУГЛЕНИЕ: сначала std::round округляет по математике,
    // потом static_cast<int> убирает .0
    // 3.7 -> 4.0 -> 4
    std::cout << "static_cast<int>(round(3.7))   = " << static_cast<int>(std::round(value)) << "\n\n";

    // Берём отрицательное число — тут самое интересное!
    double neg = -3.7;

    // УСЕЧЕНИЕ идёт К НУЛЮ, а не "вниз". -3.7 -> -3
    std::cout << "static_cast<int>(-3.7)         = " << static_cast<int>(neg) << "\n";

    // ОКРУГЛЕНИЕ по математике. -3.7 -> -4
    std::cout << "static_cast<int>(round(-3.7))  = " << static_cast<int>(std::round(neg)) << "\n\n";

    // КОММЕНТАРИЙ: когда что использовать
    // static_cast<int>(x) — УСЕЧЕНИЕ. Отбрасывает дробную часть, идёт к нулю.
    //   Использовать: когда дробная часть не важна (кол-во штук, индекс массива).
    // static_cast<int>(std::round(x)) — ОКРУГЛЕНИЕ по правилам математики.
    //   Использовать: когда важна близость к истинному значению (цены, оценки).

    return 0;
}