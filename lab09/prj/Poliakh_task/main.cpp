#include <iostream>
#include "ModulesPoliakh.h"
#include <locale.h>

using namespace std;

void calculation()
{
    cout << "������� s_calculation �����������" << endl;

    double x,y,z;
    cout << endl << "����i�� �������� �:";
    cin >> x;
    cout << "����i�� �������� y:";
    cin >> y;
    cout << "����i�� �������� z:";
    cin >> z;
    cout << s_calculation(x,y,z) << endl;
    cout << "������� s_calculation ��������� ������" << endl;
}
void waveHeight()
{
    cout << "������� waveHeight �����������" << endl;
    double wHeight;
    cout << "������ �������� ����� ����:" << endl;
    cin >> wHeight;
    cout << "��� ���������� ����: " << waveHeight(wHeight) << endl;
    cout << "������� waveHeight ��������� ������" << endl;
}
void temperature_celsia()
{
     cout << "������� temperature_celsia �����������" << endl;
     float temperature = 0;
     cout << "������ �������� �� ������ ����������: " << endl;
     cin >> temperature;
     cout << "��������� �� ������ ������: " << temperature_celsia(temperature) << endl;
     cout << "������� temperature_celsia ��������� ������" << endl;
}
void bits_number()
{
    cout << "������� bits_number �����������" << endl;
    int number;
    cout << "������ �������� �� 0 �� 65535: " << endl;
    cin >> number;
    while(number < 0 || number > 65535)
    {
        cout << "����������� ��������,��������� ��������: ";
        cin >> number;

    }
    cout << "���������:" << bits_number(number) << endl;
    cout << "������� bits_number ��������� ������" << endl;
}
void menu()
{
    cout << "--------- Settings ----------" << endl
         << "| j - s_calculation      |" << endl
         << "| z - task 9.1           |" << endl
         << "| x - task 9.2           |" << endl
         << "| c - task 9.3           |" << endl
         << "| A, v(V) - exit         |" << endl
         << "------------------------------" << endl << endl;

}
int main()
{
    setlocale(LC_ALL,"UKR");
    char symbol;
    while(true){
        menu();
        cout << "������ ������: ";
        cin >> symbol;
        if(symbol == 'j'){
            calculation();
            }
        if(symbol == 'z'){
            waveHeight();
            }
        if(symbol == 'x'){
            temperature_celsia();
        }
        if(symbol == 'c'){
            bits_number();
        }
        if(symbol == 'A' || symbol == 'v' || symbol == 'V')
            break;
        system("pause");
        system("cls");
    }



}






