#include <iostream>

using namespace std;

int main()
{
    long long a=0, wynik=0, suma=0;
    while (cin>>a)
    {
        wynik=a+wynik;
        if (a==0)
        {
        cout<<wynik<<endl;
        suma=wynik+suma;
        wynik=0;
        }
    }
    cout<<suma<<endl;
    return 0;
}
