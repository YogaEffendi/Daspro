#include <iostream>

using namespace std;

int main()
{
    //Nomor 1
    /*int j = 1;
    for (int i = 100; i>=1;i--,j++){
        cout << "i = " << i << " dan j = " << j << endl;
    }*/

    //Nomor 2
    /*for (int i = 100; i >=1; i--){
        if(i%2==1){
            continue;
        }
        cout << "Nilai Genap Adalah = " << i << endl;
    }*/

    //Nomor 3
    /*for (int i = 100; i>=1; i--){
        if (i<55){
            break;
        }
        cout << i << endl;
    }*/

    //Nomor 4
    /*int hasil;
    int i;
    for (i = 1; i<=20; i++){
        hasil = hasil + i;
            cout << i << endl;
    }
        cout <<"\n";
        cout << "Jumlah    = " << hasil << endl;
        cout << "Rata Rata = " << hasil/i;
    */

    //Nomor 5
    /*
    int x;
    cout << "Masukkan Nilai Anda = "; cin >> x;
    if (x==-99){
        cout << "Keluar Karena Break";
    }else{
        for (int i=0;i>=0;i++){
            cout << "Masukkan Nilai Anda = "; cin >> x;
            if (x==-99){
                cout << "\n";
                cout << "Keluar Karena Break";
                    break;
                }
            }
        }
    */

    //Nomor 6
    /*
    int x, min, max;
    cin >> x;

    for (int i = 1; i >=1; i++){

        if (x == -99){
            break;
        }
        if (i == 1){
            min = x;
            max = x;
        }else {
            if (x > max){
                max = x;
            }
            if (x < min){
                min = x;
            }
        }
        cin >> x;
    }
    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;
    */

    //Nomor 7
    /*
    int sum = 0;
    int x;
    cout << "input bil = "; cin >> x;

    while (x != 9999){
        cout << x << endl;
        sum = sum + x;
        cout << "input bil = "; cin >> x;
    }
    cout << "jumlah angka = " << sum;
    */

    //Nomor 8
    /*
    int x, i = 0;
    cout << "input bil : "; cin >> x;

    while (x != 9999){
        cout << x << endl;
        i = i + 1;
        cout << "input bil : "; cin >> x;
    }
    cout << "jumlah cacah angka = " << i << endl;
    */

    //Nomor 9
    /*
    int x, i = 0, sum = 0;
    cout << "input bil : "; cin >> x;

    while (x!=9999){
        cout << x <<endl;
        sum = sum + x;
        i = i + 1;
        cout << "input bil : "; cin >> x;
    }
    cout << "jumlah angka : " << sum <<endl;
    cout << "jumlah cacah angka : " << i <<endl;
    */

    //Nomor 10
    /*
    for (int i = 1; i <= 7; i++){
        cout << "Looping Yang ke-" << i <<endl;
            for (int j = 1; j <= 10; j++){
                cout << "-angka " << j << "-" <<endl;
            }
        cout << "\n";
    }
    */

    //Nomor 11
    /*
    int x, sum;
    cout << "input : "; cin >> x;

    for (int i = 1; i <= 10; i++){
        sum = i * x;
        cout << i << " x " << x << " = " << sum;
        cout << "\n";
    }
    */

    //Nomor 12
    /*
    float f;
    float c;
    cout << "-----------------------------" <<endl;
    cout << "Celcius      Fahrenheit" << endl;
    cout << "-----------------------------" <<endl;

    for ( c = 0; c <=100; c++){
            f = c*9/5+32;
        cout << "  " << c << "      |          " << f <<endl;
    }
    */

    //Nomor 13

    return 0;
}
