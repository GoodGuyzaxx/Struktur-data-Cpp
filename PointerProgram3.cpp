#include <iostream>
#include <conio.h>
#define MAX 5
using namespace std;
int main()
{
    int a[MAX];
    int *pa;
    pa = a;

    for (int i = 0; i < MAX; i++)
    {
        cout << "Masukan Nilai " << i + 1 << " : ";
        cin >> a[i];
    }
    cout << endl;
    for (int i = 0; i < MAX; i++)
    {
        cout << "Nilai a [" << i << "] = " << *pa << endl;
        pa++;
    }
    getch();
}