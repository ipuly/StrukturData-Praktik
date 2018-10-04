#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	int i,n;
	float rata,ta;
	
	cout<<"Masukan jumlah data yang akan dirata-ratakan = ";
	cin>>n;
	int a[n];
	
	for(i=0;i<n;i++){
		cout<<"Masukkan angka indeks ke-"<<1+i<<" = ";
		cin>>a[n];
		ta=ta+a[n];
	}
	cout<<endl;
	rata=ta/n;
	cout<<"Rata-rata dari data diatas adalah "<<rata;
	
	getch();
}
