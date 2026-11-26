
#include <iostream>
using namespace std;

// Рекурсивное вычисление числа Фибоначчи
int fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// Итеративное вычисление числа Фибоначчи
int fibonacciIterative(int n) {
    if (n <= 1) {
        return n;
    }

    int a = 0;
    int b = 1;

    for (int i = 2; i <= n; i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

// Вывод последовательности до n-го числа
void printFibonacci(int n) {
    int a = 0;
    int b = 1;

    for (int i = 0; i <= n; i++) {
        cout << a << " ";

        int temp = a + b;
        a = b;
        b = temp;
    }

    cout << endl;
}

int main() {
    setlocale(LC_ALL, "RU");

    int n;

    cout << "Введите n: ";
    cin >> n;

    if (n < 0) {
        cout << "Введите неотрицательное число!" << endl;
        return 0;
    }

    cout << "Рекурсивно: " << fibonacciRecursive(n) << endl;
    cout << "Итеративно: " << fibonacciIterative(n) << endl;

    cout << "Последовательность Фибоначчи: ";
    printFibonacci(n);

    return 0;
}
