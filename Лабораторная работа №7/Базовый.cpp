#include<iostream> // Подключение библиотеки
#include<clocale>  // Для корректной работы русского языка
#include<vector>	// Для создание вектора
#include<cstdlib>  // для рандомных чисел
#include<ctime>		// srand(time(0))
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int count = 1;
	srand(time(0));
	vector<vector<int>> nums(3, vector<int>(3));
	for (int i = 0; i < 3; i++) {      // Набор вектора
		for (int j = 0; j < 3; j++) {
			nums[i][j] = 1 + rand() % 20;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << nums[i][j] << " ";    // Вывод вектора
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (nums[i][j] != 0) {
				count = count * nums[i][j];   // Произведение всех элементов
			}
		}
	}
	cout << "Произведение всех элементов: " << count << endl;    // Вывод
	return 0;   // Завершение работы
}
