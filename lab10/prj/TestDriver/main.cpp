#include <iostream>
#include "ModulesPoliakh.h"
#include <cstring>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    system("chcp 1251 & cls");

    string inputtext [3] = {"�������",
                            "12334",
                            "��"};

    double x [3] = {9,6,3};
    double y [3] = {8,5,2};
    double z [3] = {7,4,1};
    int b [3] = {123,100,5};
    double resultS [3] = {-182850, -7049.32, -2.51252};
    double resultB [3] = {00000000000000000000000001111011,00000000000000000000000001100100,00000000000000000000000000000101};

    for(int i = 0; i < 3; i++) {
        cout << boolalpha
         << "����� ��������� ����������: " << authorcopyright << endl;
        cout << boolalpha
             << "ʳ������ ����������� ����:"<< authorcopyright << endl;
        cout << boolalpha
             << "�����������,�� � ����� � ���������: " << prov_world << endl;
        cout << boolalpha
             << "������� ���� ����������� �����: "<< Timestamp << endl;
        cout << boolalpha
             << "���������� ������� s_calculation: " << (s_calculation(x[i], y[i], z[i]) <= resultS[i] + 0.005) << endl;
        cout << boolalpha << "������������� ����������� ����� � �������: " << bits_number  << endl;
        getch();
    }
    return 0;

}
