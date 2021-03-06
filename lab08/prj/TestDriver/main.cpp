#include "ModulesPoliakh.h"
#include <iostream>
#include <cmath>

using namespace std;

void test_driver(){

    system("chcp 65001 & cls");

    int x [5] = {6, 9, 7, 8, 9};
    int y [5] = {5, 5, -15, -5, -7};
    int z [5] = {9, -10, 8, 6, 10};

    double result [5] = {-179455,-763245,-166579,-73701,-763349};

    for(int i = 0; i < 5; i++){
        if(round(s_calculation(x[i],y[i],z[i])) == result[i]){
            cout << "Passed" << endl;
        }
        else{
            cout << "Failed" << endl;

        }
    }
}

int main()
{
    test_driver();
    return 0;
}

