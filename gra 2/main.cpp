#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int x,strzal;
int ile=0;
bool y;
int main()
{
    srand( time( NULL ) );
    cout << "losowanie liczby...:" <<endl;
    x =(rand() % 1000) + 1;
    cout << "zgadnij liczbe:" << endl;
    while(strzal!=x)
    {
        do
        {
    cin.clear();
    cin.sync();
    cin >> strzal;
    y=cin.good();
    if (y==0)
        cout << "wprowadzono bledna wartosc - sproboj ponownie"<<endl;
        } while (y==0);

    ile++;
    if (strzal>x)
    cout << "Za duzo"<<endl;
    else
    if (strzal<x)
    cout << "za malo"<<endl;
    else if (strzal==x)
    cout <<"zgadles! za: " <<ile<<" proba";
    }
    return 0;
}
