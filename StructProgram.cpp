#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

struct mahasiswa
{
    char nim[15];
    char nama[15];
    float nilai;
};
int main()
{
    system("CLS");
    mahasiswa mhs;
    cout << "masukan NIM = ";
    cin >> mhs.nim;
    cout << "Masukan Nama = ";
    cin >> mhs.nama;
    cout << "Masukan Nilai Akhir = ";
    cin >> mhs.nilai;
    cout << endl
         << endl;
    cout << "NIM = " << mhs.nim << endl;
    cout << "Nama = " << mhs.nama << endl;
    cout << "Nilai Akhir = " << mhs.nilai << endl;
    getch();
}