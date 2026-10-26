#include<iostream>	// Подключение библиотеки
#include<clocale>	// Для корректной работы русского языка
#include<cmath>		// Подключение математической библиотеки для fabs(x)
#include <iomanip>  // Для корректного отображения чисел в выводе 
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	double a, b, h, y;
	cout << "Введите начало отрезка: " << endl;
	cin >> a;
	cout << "Введите конец отрезка: " << endl;
	cin >> b;
	cout << "Введите шаг: " << endl;
	cin >> h;
	cout << fixed << setprecision(2); // Корректное отображение чисел
	cout << "X\t" << "\tY" << endl;
	for (double x = a; x <= b; x = x + h) {	// Цикл for - вводим новую переменную x, цикл работает пока x<=b, за один шаг, цикл делает +h
		y = fabs(x);	// Модуль |x|
		cout << x << "\t\t" << y << endl;  // Вывод результата
	}
	return 0; // Заверешение работы
}
