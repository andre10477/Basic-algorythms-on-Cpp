#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <random>
using namespace std;

class Program {
public:
    // ������ ��� �������� ������
    vector<int> ccc;

    // ����� ��� ������ ��������� ����� �� 0 �� �������� `up`
    void Cycle(int up) {
        cout << "�������� ����� �� 0 �� " << up << ": ";
        for (int i = 0; i <= up; i++) {
            double k = i * i; // ��������� ������� �����
            cout << k << " "; // ������� ������� �����
        }
        cout << endl;
    }

    // ����� ��� ����� ������ � ������ � ��� ������
    void EnteringDataIntoArray(int up) {
        ccc.resize(up); // �������� ������ ������� � ������������ � `up`
        cout << "�������� ������: ";
        for (int i = 0; i < up; i++) {
            ccc[i] = i; // ��������� ������ ������� �� 0 �� up-1
            cout << "|" << ccc[i]; // ������� ������� �������
        }
        cout << "|" << endl;
    }

    // ����� ��� ������ ������� � �������� �������
    void ArrayReverse(int up) {
        cout << "������ � �������� �������: ";
        for (int i = up - 1; i >= 0; i--) { // ������� ������ � �������� �������
            cout << "|" << ccc[i];
        }
        cout << "|" << endl;
    }

    // ����� ��� ��������� ���������� ����� � ��������� [low, up]
    void RandomGenerator(int up, int low) {
        srand(time(0)); // ������������� ���������� ��������� �����

        // �������� ������������ ������
        if (low > up) {
            cout << "������: ������ ������� ������ �������." << endl;
            return;
        }

        // ��������� ���������� ����� � ��������� �� low �� up
        int num = rand() % (up - low + 1) + low;
        cout << "��������� ����� � ��������� [" << low << ", " << up << "]: " << num << endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian"); // ������������� ������ ��� ����������� ������ �� ������� �����
    cout << "����� ���������� � ������ C++!" << endl;

    Program p; // ������ ��������� ������ Program

    int up, low;

    // ���� �������� ������ ���������
    cout << "������� ������� �������: ";
    cin >> up;

    cout << "������� ������ �������: ";
    cin >> low;

    // ����� ������� ������
    p.Cycle(up); // ����� ��������� �����
    p.EnteringDataIntoArray(up); // ���������� �������
    p.ArrayReverse(up); // ����� ������� � �������� �������
    p.RandomGenerator(up, low); // ��������� ���������� �����

    system("pause>nul"); // �������� ��� ��������� �����������
    return 0;
}