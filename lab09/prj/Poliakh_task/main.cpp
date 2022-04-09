#include <iostream>
#include "ModulesPoliakh.h"
#include <locale.h>

using namespace std;

void calculation()
{
    cout << "Функція s_calculation запустилася" << endl;

    double x,y,z;
    cout << endl << "Введiть значення х:";
    cin >> x;
    cout << "Введiть значення y:";
    cin >> y;
    cout << "Введiть значення z:";
    cin >> z;
    cout << s_calculation(x,y,z) << endl;
    cout << "Функція s_calculation завершила роботу" << endl;
}
void waveHeight()
{
    cout << "Функція waveHeight запустилась" << endl;
    double wHeight;
    cout << "Введіть значення шкали вітру:" << endl;
    cin >> wHeight;
    cout << "Бал хвилювання моря: " << waveHeight(wHeight) << endl;
    cout << "Функція waveHeight завершила роботу" << endl;
}
void temperature_celsia()
{
     cout << "Функція temperature_celsia запустилась" << endl;
     float temperature = 0;
     cout << "Введіть значення за шкалою Фаренгейта: " << endl;
     cin >> temperature;
     cout << "Результат за шкалою Цельсія: " << temperature_celsia(temperature) << endl;
     cout << "Функція temperature_celsia завершила роботу" << endl;
}
void bits_number()
{
    cout << "Функція bits_number запустилась" << endl;
    int number;
    cout << "Введіть значення від 0 до 65535: " << endl;
    cin >> number;
    while(number < 0 || number > 65535)
    {
        cout << "Недопустиме значення,спробуйте спочатку: ";
        cin >> number;

    }
    cout << "Результат:" << bits_number(number) << endl;
    cout << "Функція bits_number завершила роботу" << endl;
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
        cout << "Введіть символ: ";
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






