#include<iostream> // Подключение библиотекиФ
#include<clocale>  // Для корректной работы русского языка
#include<vector>	// Для создание вектора
#include<cstdlib>  // для рандомных чисел
#include<ctime>		// srand(time(0))
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int count = 1;
	srand(time(0));
	vector<vector<int>> nums(4, vector<int>(4));
	for (int i = 0; i < 4; i++) {      // Набор вектора
		for (int j = 0; j < 4; j++) {
			nums[i][j] = 1 + rand() % 50;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << nums[i][j] << " ";    // Вывод вектора
		}
		cout << endl;
	}
	for (int i = 0; i < 4; i++) {
		count *= nums[i][i];	// Произведение всех элементов главной диагонали
	}
	cout << "Произведение элементов главной диагонали: " << count << endl;    // Вывод
	return 0;   // Завершение работы
}
