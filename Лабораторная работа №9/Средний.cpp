#include <iostream>
using namespace std;

int countPositive(const int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }

    return count;
}

int main() {
    setlocale(LC_ALL, "RU");

    int arr[] = { -5, 10, 0, 7, -3, 15, -1 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Количество положительных элементов: "
        << countPositive(arr, size) << endl;

    return 0;
}