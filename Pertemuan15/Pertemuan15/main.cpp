#include <iostream>

using namespace std;

int main()
{
    int uangdito = 5000;
    int hp;

    cout << "Uang Dito = " << uangdito << endl;
    cout << "Harga Permen = ";
    cin >> hp;

    if (hp == 500 || hp == 1000){
        cout << "Maka Permen Yang di Dapatkan Dito = " << uangdito/1000 << endl;
    } else if (hp = 300){
        cout << "Kelipatan Harga Permen = " << endl;
            for (int i = 300; i <= uangdito; i++)
            if (i%300 == 0){
                cout << i << endl;
            }
            cout << "Jumlah Permen yang didapatkan Dito =" << uangdito/hp;
    } else {
        cout << "Inputan Salah";
    }

    return 0;
}
