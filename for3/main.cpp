#include <iostream>
#include <time.h>
#include <cstdlib>


using namespace std;

int tablica1[9];

void wyptab()
{
     for (int i=0; i<10; i++)
   {
       tablica1[i]=rand()%21+10;
   }
}

void wyptab1()
{
    for (int i=0; i<10; i++)
    {
        cout<<i+1<<": "<<tablica1[i]<<endl;
    }
}

void wyptab2()
{
    for (int i=9; i>0; i--)
    {
        cout<<i+1<<": "<<tablica1[i]<<endl;
    }
}

int najm()
{
    int liczba1=tablica1[0];
    for (int i=0; i<10; i++)
    {
        if (tablica1[i] < liczba1)
            liczba1=tablica1[i];
    }
    return liczba1;
}

int najw()
{
    int liczba1=tablica1[0];
    for (int i=0; i<10; i++)
    {
        if (tablica1[i] > liczba1)
            liczba1=tablica1[i];
    }
    return liczba1;
}

void wypisanie(int i1, int i2)
{
 cout<<"najmniejsza wylosowana liczba to: "<<i1<<endl;
 cout<<"najwieksza wylosowana liczba to: "<<i2<<endl;
}

int main()
{
   srand(time(NULL));
    wyptab();
    wyptab1();
    cout<<endl;
    wyptab2();
    int mini=najm();
    int maxi=najw();
    wypisanie(mini, maxi);
    return 0;
}
