#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n,i,posisi,x,temu;
	int a[5];
	cout<<"Banyak Data : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Masukan angka : ";
		cin>>a[i];
	}
	cout<<"Data yang akan dicari : ";
	cin>>x;
	temu=0;
	i=0;
while((temu == 0)&&(i<n))
	{
	if(a[i]==x)
		{
			temu=1;
			posisi=i;
		}
	else
	i=i+1;
	}
	if(temu==1)
		cout<<"Ditemukan pada posisi"<<posisi+1<<"bernilai"<<x;
	else
		cout<<"Tidak ditentukan \n"<<x;
getch();
}


