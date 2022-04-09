#include <iostream>
#include "ModulesPoliakh.h"
#include <locale.h>

using namespace std;

void calculation()
{
    cout << "Function s_calculation started" << endl;

    double x,y,z;
    cout << endl << "Enter a value x: ";
    cin >> x;
    cout << "Enter a value y: ";
    cin >> y;
    cout << "Enter a value z: ";
    cin >> z;
    cout << s_calculation(x,y,z) << endl;
    cout << "Function s_calculation completed the work" << endl;
}
void waveHeight()
{
    cout << "Function waveHeight started" << endl;
    double wHeight;
    cout << "Enter the wind scale value:" << endl;
    cin >> wHeight;
    cout << "Ball of sea excitement: " << waveHeight(wHeight) << endl;
    cout << "Function waveHeight completed the work" << endl;
}
void temperature_celsia()
{
     cout << "Funcition temperature_celsia started" << endl;
     float temperature = 0;
     cout << "Enter the value on the Fahrenheit scale: " << endl;
     cin >> temperature;
     cout << "Celsius result: " << temperature_celsia(temperature) << endl;
     cout << "Function temperature_celsia completed the work" << endl;
}
void bits_number()
{
    cout << "Function bits_number started" << endl;
    int number;
    cout << "Enter a value from 0 to 65535: " << endl;
    cin >> number;
    while(number < 0 || number > 65535)
    {
        cout << "Invalid value, please try first: ";
        cin >> number;

    }
    cout << "Result:" << bits_number(number) << endl;
    cout << "Function bits_number completed the work" << endl;
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
    char symbol;
    while(true){
        menu();
        cout << "Enter a character: ";
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
        else{
            cout << "\a";
        }
        system("pause");
        system("cls");
    }



}






