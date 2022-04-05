#include <iostream>
#include "ModulesPoliakh.h"

using namespace std;

void test_driver_1(){
    double wHeight[5] = {60, 36, 4, 0.6, 9.6};
    int result[5] = {9, 9, 5, 3, 8};
    cout << "Task number 9.1" << endl;
    for(int i = 0;i < 5; i++){
        if(waveHeight(wHeight[i]) == result[i]){
            cout << "Test is passed" << endl;
        }
        else{
            cout << "Test is failed" << endl;
        }
    }
}


void test_driver_2(){
    float farengeit[3] = {1, 5, 10};
    float result[3] = {-17,-15,-12};
    cout << "Task number 9.2" << endl;
    for(int i = 0; i < 3;i++){
        if(temperature_celsia(farengeit[i]) == result[i]){
            cout << "Test is passed" << endl;
        }
        else{
            cout << "Test is failed" << endl;
        }
    }
}

void test_driver_3(){
    int number[4] = {10, 30, 25434, 64131};
    int result[4] = {2, 4, 8, 9};
    cout << "Task number 9.3" << endl;
    for(int i = 0;i < 4;i++){
        if(bits_number(number[i]) == result[i]){
            cout << "Test is passed" << endl;
        }
        else{
            cout << "Test is failed" << endl;
        }
    }
}
int main(){
    test_driver_1();
    test_driver_2();
    test_driver_3();
}
