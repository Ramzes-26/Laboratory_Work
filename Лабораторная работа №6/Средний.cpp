#include<iostream>	// Подключение библиотеки
#include<clocale>	// Для корректной работы русского языка
#include<vector>	// Для работы с массивами
#include<cstdlib>	// Для rand
#include<ctime>		// Разные значения
using namespace std;
int main() {
	setlocale(LC_ALL, "RU"); 
	vector<int>nums;	// Создание массива
	srand(time(0));		// Для правильной работы цикла с числами
	for (int i = 0; i < 20; i++) {
		int random_num = 1 + rand() % 100;	// Создание любого числа в интервале
		nums.push_back(random_num);
	}
	int max_val = nums[0];
	int min_val = nums[0];
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] > max_val) {		// Усовие
			max_val = nums[i];
		}
		if (nums[i] < min_val) {		// Условие 2
			min_val = nums[i];
		}
	}
	cout << "Разность: " << endl;
	cout << max_val << " - " << min_val << " = " << max_val - min_val << endl;		// Вывод
	return 0;		// Конец работы
}