#include <cmath>
#include <clocale>
#include <cstring>
#include <string>
#include <iostream>
#include <bitset>
#include <fstream>
#include <ctime>
#include <stdio.h>

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

void authorcopyright(){
    string line;
    fstream in("D:\\input.txt");
    if(in.is_open()){
        while(getline(in,line)){
            cout << line;
        }
    }
    int abcd = 0;
    for(int i = 0; i < line.size(); i++){
        if(line[i] != 'а' && line[i] != 'е' && line[i] != 'у' && line[i] != 'і' && line[i] != 'ї' && line[i] != 'о' && line[i] != 'и' && line[i] != 'є' && line[i] != 'ю' && line[i] != 'я')
            {
                abcd++;
            }
            cout << line.size();

    }
    ofstream copyright;
    copyright.open("D:\\output.txt");
    if(copyright.is_open()){
        copyright << " ----------------------------------------------- " << endl
                  << " Розробник: Полях Олександр " << endl
                  << " ВНЗ: Центральний Національний Технічний Університет " << endl
                  << " Рік розробки: 2022 " << endl
                  << " Місто/Країна: Кропивницький/Україна " << endl
                  << " --------------------------------------------------- " << endl << endl
                  << "Кількість приголосних літер: " << abcd << endl;
    }
    copyright.close();
}


void prov_world()
{
    string line;
    string krap_1 = "Про себе не кажи недобрих слів";
    string krap_2 = "Бо має сказане таємну силу.";
    string krap_3 = "Кажи:Я сильний, впевнений, щасливий!";
    string krap_4 = "І буде сам так, як ти хотів!";
    fstream in("D:\\input.txt");
    if (in.is_open())
    {
        while(getline(in, line))
        {
            cout << line << endl;
        }
    }
    int tmp = 0;
    for(int i = 0; i < 4; i++)
    {
  for(int j = 0; j < krap_1.size() || j < krap_2.size() ||j < krap_3.size() ||j < krap_4.size();j++)
  {
            if(krap_1[j] == line[j] &&
         krap_1[j+1] == line[j+1] &&
               krap_1[j+2] == line[j+2] &&
         krap_1[j+3] == line[j+3])
       {
     tmp = 1;
     ofstream text;
     text.open("D:\\output.txt", ios::app);
     if(text.is_open())
     {
         text << "Слово Є!";
     }
     break;
       }
       if(krap_2[j] == line[j] &&
         krap_2[j+1] == line[j+1] &&
               krap_2[j+2] == line[j+2] &&
         krap_2[j+3] == line[j+3])
       {
       tmp = 1;
     ofstream text;
     text.open("D:\\output.txt", ios::app);
     if(text.is_open())
     {
         text << "Слово Є!";
     }
     break;
       }
       if(krap_3[j] == line[j] &&
         krap_3[j+1] == line[j+1] &&
               krap_3[j+2] == line[j+2] &&
         krap_3[j+3] == line[j+3])
       {
     tmp = 1;
     ofstream text;
     text.open("D:\\output.txt", ios::app);
     if(text.is_open())
     {
         text << "Слово Є!";
     }
     break;
       }
          if(krap_4[j] == line[j] &&
         krap_4[j+1] == line[j+1] &&
               krap_4[j+2] == line[j+2] &&
         krap_4[j+3] == line[j+3])
       {
     tmp = 1;
     ofstream text;
     text.open("D:\\output.txt", ios::app);
     if(text.is_open())
     {
         text << "Слово Є!";
     }
     break;
       }
  }
    }
    if(tmp = 0){
  ofstream text_1;
  text_1.open("D:\\output.txt", ios::app);
  if(text_1.is_open()){
      text_1 << "Слова немає!";
  }
    }

}


void Timestamp(){
    ofstream timestamp;
    timestamp.open("D:\\input.txt", ios::app);
    time_t rawtime;
    time(&rawtime);
    timestamp << "Дата та час дозапису інформаціїї: " << ctime(&rawtime) << endl;
    timestamp.close();
}

void calculation(){
    ofstream outputFile;
    outputFile.open("D:\\output.txt", ios::app);
    outputFile << "Результат виконання функції s_calculation: " << s_calculation << endl;
    outputFile.close();

}


void binaryInDecimal(int b){
    ofstream outputFile;
    outputFile.open("D:\\output.txt", ios::app);
    bitset<32> b_number(b);
    outputFile << "Число " << b << " в двійковій системі числень: " << bits_number << endl;
    outputFile.close();
}

