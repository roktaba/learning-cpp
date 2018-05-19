#include <iostream>

using namespace std;

int main()
{
    char znak;
    int a,b;
    int *wa=&a, *wb=&b;
    int tablica[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while (cin>>znak>>*wa>>*wb)
    {
        if (znak=='z')
            tablica[*wa]=*wb;
        if (znak=='+')
            cout<<tablica[*wa]+tablica[*wb]<<endl;
        if (znak=='-')
            cout<<tablica[*wa]-tablica[*wb]<<endl;
        if (znak=='*')
            cout<<tablica[*wa]*tablica[*wb]<<endl;
        if (znak=='/')
            cout<<tablica[*wa]/tablica[*wb]<<endl;
        if (znak=='%')
            cout<<tablica[*wa]%tablica[*wb]<<endl;
    }
    return 0;
}
