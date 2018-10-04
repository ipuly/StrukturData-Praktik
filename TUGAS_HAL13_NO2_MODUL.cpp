#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

main()
{
	int i,n,ta=0,x,xi2=0;
	float rata,setdev,sdf,r;
	
	cout<<"Masukkan jumlah data = ";
	cin>>n;
	int a[n];
	
	for(i=0;i<n;i++){
		cout<<"Masukkan data ke-"<<i+1<<" = ";
		cin>>a[n];
		ta=ta+a[n];	
		xi2=xi2+pow(a[n],2);}
	rata=ta/n;
	x=pow(ta,2);
	setdev=sqrt(n*xi2-x)/(n*(n-1));
	cout<<endl;
	cout<<"Rata-rata = "<<rata<<endl;
	cout<<"Standar Deviasi = "<<setdev;

	getch();
}
