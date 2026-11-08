#include<iostream>
#include<clocale>
#include<vector> // Для работы с векторами
#include<cstdlib> // Для корректной работы rand
#include<ctime>  // Для корректной работы srand(time(0))
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(0));
	vector<int>nums;
	// 1. Заполнение
	for (int i = 0; i < 20; i++) {
		int random_num = -50 + rand() % 101;		// Создание чисел
		nums.push_back(random_num);
	}
	cout << "Массив до сортировки: ";
	// 2. Вывод ДО сортировки
	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << " ";
	}
	cout << endl;
	// 3. Сортировка (пузырек)
	for (int i = 0; i < nums.size(); i++) {
		for (int j = 0; j < nums.size() - 1; j++) {			// Условие
			if (nums[j] > nums[j + 1]) {
				int temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}

	}
	// 4. Вывод ПОСЛЕ сортировки
	cout << "\nМассив после сортировки: ";
	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << " ";
	}
	cout << endl;
	return 0;		// Конец работы 
}