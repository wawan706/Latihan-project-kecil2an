#include <iostream>
using namespace std;

int main() {
    float bb, tbCM, bmi, tbM;
    char pilihan;
    cout << "Kalkulator BMI (Body Mass Index)" << endl;
    
    do {
        cout << "Masukkan Berat Badan (kg): ";
        cin >> bb;
        cout << "Masukkan Tinggi Badan (cm): ";
        cin >> tbCM;
        
        tbM = tbCM / 100.0;
        bmi = bb / (tbM * tbM);

        cout << "BMI kamu: " << bmi << endl;

        if (bmi < 18.5){
            cout << "Kamu kurang gizi, makan lebih banyak";
        } else if (bmi >= 18.5 && bmi < 23){
            cout << "Selamat, proporsi badanmu ideal, pertahankan";
        } else if (bmi >= 23 && bmi < 30){
            cout << "berat badanmu berlebih, kamu berpotensi obesitas, jaga tubuhmu";
        } else {
            cout << "Gawat, kamu masuk kategori obesitas, segera turunkan berat badanmu, jaga pola makan dan rutin olahraga";
        }

        cout << "\nMau hitung lagi? (y/n): ";
        cin >> pilihan;
        cout << "=======================================================================" << endl;

    } 
    while (pilihan == 'Y' || pilihan == 'y');
    
    return 0;
}
