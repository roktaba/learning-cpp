#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a[5], b[5];
    float suma=0, srednia=0, najblizsza=0;
    cout << "podaj 5 liczb: " << endl;
    for(int i =0;i<5;i++)
    {
    cin>>a[i];
    suma+=a[i];
    }
    srednia = suma/5;
    cout<<"srednia to: "<<srednia<<endl;
    for(int i=0; i<=4; i++)
    {
       b[i]=srednia-a[i];
       b[i]=abs(b[i]);
    }
    najblizsza=b[0];
    for(int i=1;i<=4;i++)
    {
        if (najblizsza > b[i])
        {
            najblizsza=b[i];
        }
    }
    cout<<endl<<"liczba/y najblizsze sredniej to: ";
    for (int i=0; i<=4; i++)
    {
    if (najblizsza == b[i])
        cout<< a[i]<< " ";
    }
    return 0;
}
