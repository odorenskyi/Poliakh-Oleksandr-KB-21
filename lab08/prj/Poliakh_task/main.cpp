#include <iostream>
#include <cmath>
#include <locale>
#include <windows.h>
#include <string>
#include "ModulesPoliakh.h"


using namespace std;

string authorCopyright(){
    return "� ����� ���������";
}

bool Expression(double a, double b){
    return (a + 1 <= b);
}

float DecHexNumber(int x,int y,int z){
    double S;
    cout << endl << "'X' � ��������i� = " << dec << x
     << endl << "'X' � �i�����������i� = " << hex << x << endl;
    cout <<"'Y' � ��������i� = " << dec << y
     << endl << "'Y' � �i�����������i� = " << hex << y << endl;
    cout << "'Z' � ��������i� = " << dec << z
     << endl << "'Z' � �i�����������i� = " << hex << z << endl;
    S = s_calculation(x,y,z);
    return S;
    }

 int main(){
    setlocale(LC_ALL,"UKR");
    double x,y,z,a,b;
    cout << authorCopyright();
    cout << endl << "����i�� �������� �:";
    cin >> x;
    cout << "����i�� �������� y:";
    cin >> y;
    cout << "����i�� �������� z:";
    cin >> z;
    cout << "����i�� �������� a:";
    cin >> a;
    cout << "����i�� �������� b:";
    cin >> b;
    cout << Expression(a,b);
    cout << DecHexNumber(x,y,z) << endl;
    system("pause");
    return 0;
 }





