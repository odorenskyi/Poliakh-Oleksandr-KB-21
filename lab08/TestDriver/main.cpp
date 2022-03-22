#include "ModulesPoliakh.h"
#include <iostream>
#include <cmath>

using namespace std;

/*int main(){
    cout << s_calculation(8,-5,6);
}
*/
void test_drv(void){

    system("chcp 65001 & cls");

    int x [5] = {6, 9, 7, 8, 9};
    int y [5] = {5, 5, -15, -5, -7};
    int z [5] = {9, -10, 8, 6, 10};

    double result [5] = {-179455,-763245,-166579,-73701,-763349};

    for(int i = 0; i < 5; i++){
        if(round(s_calculation(x[i],y[i],z[i])) == result[i]){
            cout << "Test is passed" << endl;
        }
        else{
            cout << "Test failed" << endl;

        }
    }
}

int main()
{
    test_drv();
    return 0;
}

