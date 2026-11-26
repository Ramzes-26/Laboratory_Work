#include <iostream>
using namespace std;

int cube(int x) {
    return x * x * x;
}

int main() {
    setlocale(LC_ALL, "RU");
    int num;

    cout << "Введите число: ";
    cin >> num;

    cout << "Куб числа: " << cube(num) << endl;

    return 0;
}