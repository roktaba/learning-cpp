#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int ile_testow=0;
    cin>>ile_testow;
    for (int i=0; i<ile_testow; i++)
    {
    int ile_liczb=0;
    cin>>ile_liczb;
    float a[ile_liczb], b[ile_liczb];
    float suma=0, srednia=0, najblizsza=0;
    for(int i =0;i<ile_liczb;i++)
    {
    cin>>a[i];
    suma+=a[i];
    }
    srednia = suma/ile_liczb;

    for(int i=0; i<ile_liczb; i++)
    {
       b[i]=srednia-a[i];
       b[i]=abs(b[i]);
    }
    najblizsza=b[0];
    for(int i=1;i<ile_liczb;i++)
    {
        if (najblizsza > b[i])
        {
            najblizsza=b[i];
        }
    }
    for (int i=0; i<ile_liczb; i++)
    {
    if (najblizsza == b[i])
        {
        cout<<a[i]<<endl;
        break;
        }
    }
    }
    return 0;
}
