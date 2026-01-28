# kalkulator1

#include <iostream>
using namespace std;

int a, b;
char c;

int penjumlahan(int a, int b){
    return a + b;
}

int pengurangan(int a, int b){
    return a - b;
}

int perkalian(int a, int b){
    return a * b;
}

float pembagian(float a, float b){
    if (b == 0){
        cout << "Tak Terdefinisi" << endl;
        return 0;
    } else {
        return a / b;
    }
}

int main() {
    cout << "INI ADALAH KALKULATOR \n masukkan angka pertama: ";
    cin >> a;
    cout << "masukkan angka kedua: ";
    cin >> b;
    cout << "masukkan operasi (+, -, x, /): ";
    cin >> c;

    if (c == '+'){
        cout << penjumlahan(a, b);
    } else if (c == '-'){
        cout << pengurangan(a, b);
    } else if (c == 'x'){
        cout << perkalian(a, b);
    } else if (c == '/'){
        cout << pembagian(a, b);
    }

    return 0;
}
