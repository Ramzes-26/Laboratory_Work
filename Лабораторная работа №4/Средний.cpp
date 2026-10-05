#include<iostream> // Подключение библиотеки
#include<clocale>  // Для корректной работы русского языка
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	char c;
	cout << "Перевод\n"; // Заголовок
	cout << "Выберите единицы измерения:\n \n1 - Дюймы - см\n2 - Футы - м\n3 - Мили - Км\n";  // Инструкция
	cin >> c;                        
	double a, res;
	cout << "Введите расстоянии: ";
	cin >> a;             // Ввод переменной
	switch (c) {
	case '1': res = a * 2.54; break;
	case '2': res = a * 0.3048; break;
	case '3': res = a * 1.609344; break;
	default:
		cout << "Введите корректные данные!";
		return 1;
	}
	cout << "Result: " << res;
	return 0;                         // Завершение работы
}