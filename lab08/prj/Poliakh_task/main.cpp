#include <iostream>
#include <cmath>
#include <locale>
#include <windows.h>
#include <string>
#include "ModulesPoliakh.h"


using namespace std;

string authorCopyright(){
    return "© ѕол€х ќлександр";
}

bool Expression(double a, double b){
    return (a + 1 <= b);
}

float DecHexNumber(int x,int y,int z){
    double S;
    cout << endl << "'X' в дес€тковiй = " << dec << x
     << endl << "'X' в шiстнадц€тковiй = " << hex << x << endl;
    cout <<"'Y' в дес€тковiй = " << dec << y
     << endl << "'Y' в шiстнадц€тковiй = " << hex << y << endl;
    cout << "'Z' в дес€тковiй = " << dec << z
     << endl << "'Z' в шiстнадц€тковiй = " << hex << z << endl;
    S = s_calculation(x,y,z);
    return S;
    }

 int main(){
    setlocale(LC_ALL,"UKR");
    double x,y,z,a,b;
    cout << authorCopyright();
    cout << endl << "¬ведiть значенн€ х:";
    cin >> x;
    cout << "¬ведiть значенн€ y:";
    cin >> y;
    cout << "¬ведiть значенн€ z:";
    cin >> z;
    cout << "¬ведiть значенн€ a:";
    cin >> a;
    cout << "¬ведiть значенн€ b:";
    cin >> b;
    cout << Expression(a,b);
    cout << DecHexNumber(x,y,z) << endl;
    system("pause");
    return 0;
 }





