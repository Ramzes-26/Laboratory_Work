#include <iostream>
#include <clocale>
int main() {
	setlocale(LC_ALL, "RU");
	std::cout << "Калькулятор среднего арифметического числа"; // заголовок
	double a, d;
	std::cout << "\nВведите первое число: ";
	std::cin >> a; // ввод первого числа
	std::cout << "Введите второе число: ";
	std::cin >> d; // ввод второго числа
	std::cout << "Среднее арифметическое : " << (a + d) / 2; // формула
	return 0;

}