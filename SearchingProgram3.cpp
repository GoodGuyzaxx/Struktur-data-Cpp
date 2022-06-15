#include <iostream>
#include <conio.h>
using namespace std;
int data [10]={1,3,4,7,12,25,40,65,78,90};
int binary_search(int cari)
{
	int a,b,c;
	int n=10;
	a=0;
	b=n-1;
	int temu=0;
	while (a<=b && temu==0)
	{
		c=(a+b)/2;
		if (data[c]==cari)
		temu=1;
		else
		if(cari<data[c])
		b=c-1;
		else a=c+1;
	}
	if(temu==1) return 1; else return 0;
}
int main()
{
	int cari,hasil;
	cout<<"Pencarian data dengan binary search \n\n";
	cout<<'masukan data yang ingin di cari = ';
	cin>>cari;
	hasil = binary_search(cari);
	if(hasil==1)
	{
		cout<<"Data ada!"<<endl;
	}
	else
	if(hasil==0)
	cout<<"Data tidak ada!"<<endl;
getch();
}


