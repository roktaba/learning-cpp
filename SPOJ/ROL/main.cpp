#include <iostream>

using namespace std;

int main()
{
    int tests, dig_c;
    int *tab;
    cin>>tests;
    for (int i=0; i<tests; i++)
    {
        cin>>dig_c;
        tab = new int [dig_c];
        for (int j=0; j<dig_c; j++)
        {
            cin>>tab[j];
        }
        for (int j=1; j<dig_c; j++)
        {
            cout<<tab[j]<<" ";
        }
        cout<<tab[0]<<" ";
    }
    return 0;
}
