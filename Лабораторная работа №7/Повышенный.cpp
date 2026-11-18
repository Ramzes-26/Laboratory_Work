#include <iostream> 
#include <clocale>  
#include <vector>	
#include <cstdlib>  
#include <ctime>		

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    // Создаем матрицы 4х4
    vector<vector<int>> nums(4, vector<int>(4));
    vector<vector<int>> result(4, vector<int>(4));

    // 1. Заполняем случайными числами и выводим
    cout << "Исходная матрица:" << endl;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums[i].size(); j++) {
            nums[i][j] = rand() % 100;
            cout << nums[i][j] << "\t";
        }
        cout << endl;
    }

    // 2. Поворачиваем на 90 градусов ПРОТИВ часовой
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums[i].size(); j++) {
            
            result[nums.size() - 1 - j][i] = nums[i][j];
        }
    }

    // 3. Выводим результат
    cout << "\nПеревернутая матрица (на 90 градусов против часовой):" << endl;
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}