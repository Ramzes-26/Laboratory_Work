#include <iostream> // Подключение библиотеки
#include <clocale>
int main() {
	setlocale(LC_ALL, "RU");
	std::cout << "Вычисление среднего арифметического!\n"; // Заголовок
	int a, b;
	std::cout << "Введите первое число: ";
	std::cin >> a;                               // Ввод первого числа
	std::cout << "Введите второе число: ";
	std::cin >> b;                              // Ввод второго числа
	double like = static_cast<double>(a);       // явное приведение одного операнда к double
	double like2 = static_cast<double>(b);      // явное приведение одного операнда к double
	std::cout << "Среднее арифметическое: " << (like + like2) / 2.0 << "\n";  // формула
	return 0;
}