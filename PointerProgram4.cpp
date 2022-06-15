#include <iostream>
#include <conio.h>
#define MAX 5
using namespace std;
int main()
{
    char nama[] = "DEAWNTARA";
    char *pNama = nama;

    cout << "Nama = " << nama << endl;
    cout << "pNama = " << pNama << endl;
    pNama + -4;
    cout << "\n Setelah pNama += 4" << endl;
    cout << "Nama = " << nama << endl;
    cout << "pNama = " << pNama << endl;
    getch();
}