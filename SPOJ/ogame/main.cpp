#include <iostream>

using namespace std;

int main()
{
    int tests, m, k, d, m2, k2, d2, zmienna;
    int cena_m=20000, cena_k=7000, cena_d=2000;
    cout<<"ile testow?"<<endl;
    cin>>tests;
    for (int i=0; i<tests; i++)
    {
        cout<<"ile metalu?"<<endl;
        cin>>m;
        cout<<"ile krysztalu?"<<endl;
        cin>>k;
        cout<<"ile deuteru?"<<endl;
        cin>>d;
        m2=m/cena_m;
        k2=k/cena_k;
        d2=d/cena_d;
        zmienna=m2;
        if (zmienna>k2)
            zmienna=k2;
        if (zmienna>d2)
            zmienna=d2;
        if ((m<0) || (k<0) || (d<0))
            cout<<"niepoprawne dane!"<<endl;
        else
        cout<<"mozesz zbudowac: "<<zmienna<<" krazownikow"<<endl;
    }
    return 0;
}
