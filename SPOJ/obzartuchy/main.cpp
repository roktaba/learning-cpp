#include <iostream>
#include <math.h>

using namespace std;

int sekund_w_dniu = 86400;
int ilosc_testow, liczba_obzartuchow, liczba_ciastek_w_pudelku;

int main()
{
    cin>>ilosc_testow;
    int tabela_wynikow[ilosc_testow];

    for (int i=0; i<ilosc_testow; i++)
    {
    cin>>liczba_obzartuchow>>liczba_ciastek_w_pudelku;
    float ilosc_zjedzonych_ciastek = 0;
    double pudelka = 0;
    int czasy_jedzenia [liczba_obzartuchow];
    for (int i=0; i<liczba_obzartuchow; i++)
    {
        cin>>czasy_jedzenia[i];
        ilosc_zjedzonych_ciastek+=(sekund_w_dniu/czasy_jedzenia[i]);
    }
    pudelka = ilosc_zjedzonych_ciastek/liczba_ciastek_w_pudelku;
    double zaokr = ceil(pudelka);
    tabela_wynikow[i] = zaokr;
    }
    for (int i=0; i<ilosc_testow; i++)
    {
        cout<<tabela_wynikow[i]<<endl;
    }
    return 0;
}
