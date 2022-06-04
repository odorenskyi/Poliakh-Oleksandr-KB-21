#include <iostream>
#include "ModulesPoliakh.h"
#include <cstring>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    system("chcp 1251 & cls");

    string inputtext [3] = {"сказане",
                            "12334",
                            "кіт"};

    double x [3] = {9,6,3};
    double y [3] = {8,5,2};
    double z [3] = {7,4,1};
    int b [3] = {123,100,5};
    double resultS [3] = {-182850, -7049.32, -2.51252};
    double resultB [3] = {00000000000000000000000001111011,00000000000000000000000001100100,00000000000000000000000000000101};

    for(int i = 0; i < 3; i++) {
        cout << boolalpha
         << "Запис авторської інформації: " << authorcopyright << endl;
        cout << boolalpha
             << "Кількість приголосних літер:"<< authorcopyright << endl;
        cout << boolalpha
             << "Повідомлення,чи є слово у краплинці: " << prov_world << endl;
        cout << boolalpha
             << "Дозапис часу редагування файлу: "<< Timestamp << endl;
        cout << boolalpha
             << "Результату функції s_calculation: " << (s_calculation(x[i], y[i], z[i]) <= resultS[i] + 0.005) << endl;
        cout << boolalpha << "Конвертування десяткового числа в двійкове: " << bits_number  << endl;
        getch();
    }
    return 0;

}
