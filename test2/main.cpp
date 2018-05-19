#include <iostream>
#include <cmath>

using namespace std;

int a=0,b=5;
float l[10];
float s,x,y;
int main()

{
    cout << "Podaj " << b << " liczb: " << endl;
    for(a; a<b;a++)
    {
        cin >> l[a];
        s+=l[a];
    }
    x = s/b;
    cout << "Srednia: " << x << endl;
    cout << "Najblizsze liczby do sredniej to: ";
    for(a=b; a<b*2; a++)
        {
            l[a]=fabs(x-l[a-b]);
        }
    y = l[b];

    for(a=b; a<b*2; a++)
        {
        if(y>=l[a])
        y=l[a];
        }
    for(a=b; a<b*2; a++)
    {
    if(l[a]==y)
    cout << l[a-b] << " ";
    }
    return 0;
}
