#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <random>
using namespace std;

class Program {
public:
    // Массив для хранения данных
    vector<int> ccc;

    // Метод для вывода квадратов чисел от 0 до значения `up`
    void Cycle(int up) {
        cout << "Квадраты чисел от 0 до " << up << ": ";
        for (int i = 0; i <= up; i++) {
            double k = i * i; // вычисляем квадрат числа
            cout << k << " "; // выводим квадрат числа
        }
        cout << endl;
    }

    // Метод для ввода данных в массив и его вывода
    void EnteringDataIntoArray(int up) {
        ccc.resize(up); // изменяем размер массива в соответствии с `up`
        cout << "Исходный массив: ";
        for (int i = 0; i < up; i++) {
            ccc[i] = i; // заполняем массив числами от 0 до up-1
            cout << "|" << ccc[i]; // выводим элемент массива
        }
        cout << "|" << endl;
    }

    // Метод для вывода массива в обратном порядке
    void ArrayReverse(int up) {
        cout << "Массив в обратном порядке: ";
        for (int i = up - 1; i >= 0; i--) { // выводим массив в обратном порядке
            cout << "|" << ccc[i];
        }
        cout << "|" << endl;
    }

    // Метод для генерации случайного числа в диапазоне [low, up]
    void RandomGenerator(int up, int low) {
        srand(time(0)); // инициализация генератора случайных чисел

        // Проверка корректности границ
        if (low > up) {
            cout << "Ошибка: нижняя граница больше верхней." << endl;
            return;
        }

        // Генерация случайного числа в диапазоне от low до up
        int num = rand() % (up - low + 1) + low;
        cout << "Случайное число в диапазоне [" << low << ", " << up << "]: " << num << endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian"); // устанавливаем локаль для корректного вывода на русском языке
    cout << "Добро пожаловать в основы C++!" << endl;

    Program p; // создаём экземпляр класса Program

    int up, low;

    // Ввод значений границ диапазона
    cout << "Введите верхнюю границу: ";
    cin >> up;

    cout << "Введите нижнюю границу: ";
    cin >> low;

    // Вызов методов класса
    p.Cycle(up); // вывод квадратов чисел
    p.EnteringDataIntoArray(up); // заполнение массива
    p.ArrayReverse(up); // вывод массива в обратном порядке
    p.RandomGenerator(up, low); // генерация случайного числа

    system("pause>nul"); // задержка для просмотра результатов
    return 0;
}