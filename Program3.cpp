#include <iostream>
using namespace std;
int main()
{
    const int sks = 4, nim = 210301025;
    char nama[10] = "Dewantara", matkul[] = "Struktur Data";
    float nilai1, nilai2, nilai3;
    nilai1 = 90;
    nilai2 = 80;
    nilai3 = (nilai1 + nilai2) / 2;
    cout << "Nama Mahasiswa  :" << nama << "\n";
    cout << "NIM             :" << nim << "\n";
    cout << "Mata Kuliah     :" << matkul << "\n";
    cout << "SKS             :" << sks << "\n";
    cout << "Nilai Praktek   :" << nilai1 << "\n";
    cout << "NIlai Teori     :" << nilai2 << "\n";
    cout << "Nilai Akhir     :" << nilai3 << "\n";
}