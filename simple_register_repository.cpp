#include <iostream>
using namespace std;

struct manusia{
    string asal;
    int umur;
    char inisial;
};

int main(){
    manusia warga_bumi[3];

    warga_bumi[0] = {"pangkep", 18, 'w'};
    warga_bumi[1] = {"pretoria", 54, 'e'};
    warga_bumi[2] = {"saudi", 65, 'm'};

    for (int i = 0; i < 3; i++){
        cout << "manusia " << i << ": \n" << "inisial: " <<  warga_bumi[i].inisial << '\n' <<
        "umur: " << warga_bumi[i].umur << '\n' << "asal: " << warga_bumi[i].asal << "\n\n";
    }
}
