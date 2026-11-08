#include<iostream>	// Подключение библиотеки
#include<clocale>	// Для корректной работы русского языка
#include<vector>    // Для работы с массивами
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int a;
	int count = 0;
	cout << "Введите количество цифр: ";
	cin >> a;
	vector<int>nums;           // Создание массива
	for (int i = 0; i < a; i++) {
		int temp;
		cout << "Введите цифру: " << endl;
		cin >> temp;
		nums.push_back(temp);    // Число в конец
		}
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] % 2 != 0) {         // Условие
			count++;  // Увеличиваем переменную на 1
		}
	}
	cout << "Количество нечетных элементов: " << count << endl;   // Вывод
	return 0;   // Конец работы
}