#include <iostream>

using namespace std;

int main()
{
    int tests;
    int *tab;
    cin>>tests;
    for (int i=0; i<tests; i++)
    {
    int dig_c;
    cin>>dig_c;
    tab = new int [dig_c];
    for (int i=0; i<dig_c; i++)
    {
        cin>>tab[i];
    }
    for (int i=dig_c-1; i>=0; i--)
    {
        cout<<tab[i]<<" ";
    }
    cout<<endl;
    }
    delete [] tab;
    return 0;
}
