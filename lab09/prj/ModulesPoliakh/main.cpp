#include <cmath>
#include <clocale>
#include <string>
#include "ModulesPoliakh.h"
#include <iostream>
#include <bitset>

using namespace std;

double s_calculation(double x,double y,double z){
    return 2.72 * abs(sin(z)) + pow(0.5,pow(x,2)) - sqrt(abs(pow(y + z,2) - pow(x,5))) / 10 * 3.14 * pow(z,4);

}

double waveHeight(double wHeight)
{
int grade = 0;
    if(wHeight == 0){
        return grade;

    }
    if(wHeight >= 0 && wHeight <= 0.1){
        grade = 1;
        return grade;
    }
    if(wHeight >= 0.1 && wHeight <= 0.5){
        grade = 2;
        return grade;
    }
    if(wHeight >= 0.5 && wHeight <= 1.25){
        grade = 3;
        return grade;
    }
    if(wHeight >= 1.25 && wHeight <= 2.50){
        grade = 4;
        return grade;
    }
    if(wHeight >= 2.50 && wHeight <= 4.0){
        grade = 5;
        return grade;
    }
    if(wHeight >= 4 && wHeight <= 6){
        grade = 6;
        return grade;
    }
    if(wHeight >= 6 && wHeight <= 9){
        grade = 7;
        return grade;
    }
    if(wHeight >= 9 && wHeight <= 14){
        grade = 8;
        return grade;
    }
    if(wHeight > 14){
        grade = 9;
        return grade;
    }
}

int temperature_celsia(float farengeit){
    float celsia = 0.55555555556 * (farengeit - 32);
    return celsia;
}

int bits_number(int number){
    bitset<32> b_number{number};
    if(b_number[1]){
        return b_number.count();
    }
        return 32 - b_number.count();
}


