#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;

    int x;
    int y;

    cout << "Masukkan Kode Jurusan= "; cin >> x;

    if (x == 1){
        cout << "Jurusan Anda Adalah Teknik Informatika" << endl;
    }
    if (x == 2){
        cout << "Jurusan Anda Adalah Sistem Informasi" << endl;
    }
    if (x == 3){
        cout << "Jurusan Anda Adalah Desain Komunikasi Visual" << endl;
    }

    cout << "--------------------------------------------------------------" << endl;
    cout << "Masukkan Semester= "; cin >> y;

    if (y == 1 || y == 2){
        cout << "Anda Dalam Kategori Freshman" << endl;
    }
    if (y == 3 || y == 4){
        cout << "Anda Dalam Kategori Sophomore" << endl;
    }
    if (y == 5 || y == 6){
        cout << "Anda Dalam Kategori Junior" << endl;
    }
    if (y == 7 || y == 8){
        cout << "Anda Dalam Kategori Senior" << endl;
    }
    return 0;
}
