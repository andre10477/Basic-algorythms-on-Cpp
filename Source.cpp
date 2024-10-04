#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <random>
using namespace std;

class Program {
public:
    int ccc[10];

    // Метод для вывода квадратов чисел от 0 до 9
    void Cycle() {
        for (int i = 0; i < 10; i++) {
            int k = i * i;
            cout << k << " "; // выводим все квадраты
        }
        cout << endl;
    }

    // Метод для ввода данных в массив и его вывода
    void EnteringDataIntoArray() {
        for (int i = 0; i < 10; i++) {
            ccc[i] = i;
            cout << "|" << ccc[i]; // выводим исходный массив
        }
        cout << "|" << endl;
    }

    // Метод для вывода массива в обратном порядке
    void ArrayReverse() {
        for (int i = 9; i >= 0; i--) {
            cout << "|" << ccc[i]; // выводим массив в обратном порядке
        }
        cout << "|" << endl;
    }

    // Метод для генерации случайного числа в диапазоне
    void RandomGenerator() {
        srand(time(0));
        int up, low;
        cout << "Введите верхнюю границу: ";
        cin >> up;
        cout << "Введите нижнюю границу: ";
        cin >> low;

        if (low > up) {
            cout << "Ошибка: нижняя граница больше верхней." << endl;
            return;
        }

        int num = rand() % (up - low + 1) + low;
        cout << "Случайное число: " << num << endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian"); // устанавливаем кодировку для вывода
    cout << "Добро пожаловать в основы C++!" << endl;

    Program p;
    p.Cycle();
    p.EnteringDataIntoArray();
    p.ArrayReverse();
    p.RandomGenerator();

    return 0;
}