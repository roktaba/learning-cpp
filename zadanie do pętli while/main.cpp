#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;
float x;
bool y=0;
int main()
{
    do
    {
    //system("cls");
    cin.clear();
    cin.sync();
    cout << "podaj liczbe: " << endl;
    cin >> x;
    y=cin.good();
    if (y==0)
        cout << "to nie liczba"<<endl;
    }while (y==0);
    cout << "liczba to: " << x << endl;
    return 0;
}
