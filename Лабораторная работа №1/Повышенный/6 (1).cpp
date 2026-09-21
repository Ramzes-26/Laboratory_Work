#include <iostream>
#include <clocale>
int main() {
	setlocale(LC_ALL, "RU");
	std::cout << "Калькулятор времени"; // заголовок
	double a, b;
	std::cout << "\nВведите часы: ";
	std::cin >> a;                           // ввод часов
	std::cout << "Введите минуты: ";
	std::cin >> b;                             //ввод минут
	if (a >= 0 && b >= 0) {
		std::cout << "Ответ: ";
		double ANT = a * 60 + b;  // всего минут
		std::cout << ANT << " (мин); " << ANT * 60 << " (сек)";
	}
	else {
		std::cout << "Введите корректные данные!";
	}
	return 0;
}