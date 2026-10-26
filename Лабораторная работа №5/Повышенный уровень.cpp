#include<iostream>	// Подключение библиотеки
#include<clocale>	// Для корректной работы русского языка
#include<cmath>		// Подключение математической библиотеки для fabs(x)
#include <iomanip>  // Для корректного отображения чисел в выводе 
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	double a, b, y;
	double sum = 0;
	cout << "Введите начало отрезка: ";
	cin >> a;
	cout << "Введите конец отрезка: ";
	cin >> b;
	double h = (b - a) / 20;
	cout << fixed << setprecision(2); // Корректное отображение чисел
	cout << "X\t" << "\tY" << endl;
	for (double x = a; x <= b+1e-9; x = x + h) {	// Цикл for - вводим новую переменную x, цикл работает пока x<=b, за один шаг, цикл делает +h
		if (fabs(cos(x)) < 0.0001) {	// Проверка
			continue;                // Пропуск
		}
		y = tan(x);
				sum = sum + y;		// Складываем все значения
		cout << x << "\t\t" << y << endl;  // Вывод результата
	}
	cout << "Сумма ряда: " << sum << endl;   // Вывод суммы ряда
	return 0; // Заверешение работы
}