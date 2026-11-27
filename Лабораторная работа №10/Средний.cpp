#include <iostream>
using namespace std;

void zeroIfNegative(int& value) {
    if (value < 0) {
        value = 0;
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    int a;

    cout << "Введите число: ";
    cin >> a;

    zeroIfNegative(a);

    cout << "Результат: " << a << endl;

    return 0;
}