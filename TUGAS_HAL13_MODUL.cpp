#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    string kata;
    cout<<"PROGRAM SEGITIGA KATA"<<endl<<endl;
    cout<<"Masukan suatu kata : ";
    cin>>kata;cout<<endl;
    int i=kata.length()-1; 
    for (i;i>=0;i--){ 
        for(int a=0;a<=i;a++){ 
            cout<<kata[a];
        }
        cout<<endl;
    }
    getch();
}
