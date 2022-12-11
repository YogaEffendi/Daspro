#include <iostream>

using namespace std;

int main()
{
    int x[3][2][2];
    int a =3, b =2, c =2;
    int h=2;
    int sum=0;
    int avg;
    int p;
    for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            for (int k=0; k<2; k++){
                x[i][j][k]=h;
                h+=2;
            }
        }
    }

    for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            for (int k=0; k<2; k++){
                cout << x[i][j][k] << endl;
                if (x[i][j][k]%4==0){
                    sum = sum + x[i][j][k];
                }
            }
        }
    }
    p = a*b*c/2;
    avg = sum/p;
    cout << "Jumlah Kelipatan 4 = " << sum << endl;
    cout << "Rata-Rata Kelipatan 4 = " << avg;

    return 0;
}
