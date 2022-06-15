#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, s;
    char h = 64, nama[4][5][22] = {
                     "Rifky", "Destian", "vie", "Andre", "Mia",
                     "Della", "Vanya", "indra", "Vio", "Nilna",
                     "Hakim", "Bagus", "Firman", "Amin", "Awan",
                     "Ramdhan", "dilang", "Lingga", "Rizky", "Kevin"};
    cout << "Daftar Nama Kelompok: \n";
    for (i = 0; i < 4; i++)
    {
        ++h;
        cout << "Kelompok" << h;
        for (s = 0; s < 5; s++)
        {
            cout << "\n\t" << s + 1 << "." << nama[i][s];
        }
        cout << "\n";
    }
    cout << endl;
    getch();
}

