#include<iostream> // Подключение библиотеки
#include<clocale>  // Для корректной работы русского языка
using namespace std; // Подключение пространства имен
int main() {
	setlocale(LC_ALL, "RU");
	char a;                  // Символ
	cout << "Название фигуры!\n";                                                           
	cout << "Выберите фигуру!\n" << "1 - Круг\n" << "2 - Квадрат\n" << "3 - Треугольник\n";   // Условия
	cin >> a;                 // Ввод символа
	switch (a) {              // Проверка переменной
	case '1': cout << "Круг\n"; break;
	case '2': cout << "Квадрат\n"; break;
	case '3': cout << "Треугольник\n"; break;
	default: cout << "Неизвестное число\n"; break;   // Проверка некорректного ввода
	}
	return 0; // Конец работы
}