#include <iostream>
using namespace std;

//Prosedur input data
void inputData(float &berat, float &tinggi){
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

//Fungsi menghitung BMI
float hitungBMI(float berat, float tinggi){
    return berat / (tinggi * tinggi);
}

// Fungsi Menentukan status BMI
string statusBMI(float bmi){
    if (bmi < 18.5)
        return "Berat badan kurang";
    else if( bmi < 25)
        return "Berat badan normal";
    else if (bmi < 30)
        return "Berat badan kelebihan";
    else
        return "Obesistas";
}

int main(){
    float berat, tinggi, bmi;
}