#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;
float a, c;
int b;
bool suc1, suc2, suc3;
int main()
{
cout<<"podaj liczbe rzeczywista: "<<endl;
cin>>a;
suc1=cin.good();
system("cls");
cin.clear();
cin.sync();
cout<<"podaj liczbe calkowita: "<<endl;
cin>>b;
suc2=cin.good();
system("cls");
cin.clear();
cin.sync();
cout<<"podaj liczbe rzeczywista2: "<<endl;
cin>>c;
suc3=cin.good();
system("cls");
cin.clear();
cin.sync();

getchar();getchar();

cout<<a<<" Wczytano?="<<suc1<<endl;
cout<<b<<" Wczytano?="<<suc2<<endl;
cout<<c<<" Wczytano?="<<suc3<<endl;

return 0;
}
