#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <random>
using namespace std;

class Program {
public:
    int ccc[10];

    // ����� ��� ������ ��������� ����� �� 0 �� 9
    void Cycle() {
        for (int i = 0; i < 10; i++) {
            int k = i * i;
            cout << k << " "; // ������� ��� ��������
        }
        cout << endl;
    }

    // ����� ��� ����� ������ � ������ � ��� ������
    void EnteringDataIntoArray() {
        for (int i = 0; i < 10; i++) {
            ccc[i] = i;
            cout << "|" << ccc[i]; // ������� �������� ������
        }
        cout << "|" << endl;
    }

    // ����� ��� ������ ������� � �������� �������
    void ArrayReverse() {
        for (int i = 9; i >= 0; i--) {
            cout << "|" << ccc[i]; // ������� ������ � �������� �������
        }
        cout << "|" << endl;
    }

    // ����� ��� ��������� ���������� ����� � ���������
    void RandomGenerator() {
        srand(time(0));
        int up, low;
        cout << "������� ������� �������: ";
        cin >> up;
        cout << "������� ������ �������: ";
        cin >> low;

        if (low > up) {
            cout << "������: ������ ������� ������ �������." << endl;
            return;
        }

        int num = rand() % (up - low + 1) + low;
        cout << "��������� �����: " << num << endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian"); // ������������� ��������� ��� ������
    cout << "����� ���������� � ������ C++!" << endl;

    Program p;
    p.Cycle();
    p.EnteringDataIntoArray();
    p.ArrayReverse();
    p.RandomGenerator();

    return 0;
}