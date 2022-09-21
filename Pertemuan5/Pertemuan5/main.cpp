#include <iostream>

using namespace std;

int main()
{


    float phi=3.14;
    float r;

    cout << "Menghitung Luas Lingkaran" << endl;
    cout << "Masukkan jari-jari: "; cin >> r;
    cout << "Luas Lingkaran: " << phi*r*r << endl;
    cout << endl;

    cout << "------------------------------------------------------------------" << endl;
    cout << endl;
    float p;
    float l;

    cout << "Menghitung Luas Persegi Panjang" << endl;
    cout << "Masukkan Panjang: "; cin >> p;
    cout << "Masukkan Lebar: "; cin >> l;
    cout << "Luas Persegi Panjang: " << p*l << endl;

    return 0;
}
