#include <iostream>
using namespace std;

void matrixStats(int a[3][3], int& sumRows, int& sumCols, int& trace) {
    sumRows = 0;
    sumCols = 0;
    trace = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sumRows += a[i][j];
            sumCols += a[j][i];

            if (i == j) {
                trace += a[i][j];
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    int a[3][3];

    cout << "Введите элементы матрицы 3x3:" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    int sumRows, sumCols, trace;

    matrixStats(a, sumRows, sumCols, trace);

    cout << "Сумма по строкам: " << sumRows << endl;
    cout << "Сумма по столбцам: " << sumCols << endl;
    cout << "След матрицы: " << trace << endl;

    return 0;
}