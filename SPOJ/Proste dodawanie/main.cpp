#include <iostream>

using namespace std;

int main()
{
    int test_c, dig_c, a, wynik = 0;
    cin>>test_c;
    for (int i=0; i<test_c; i++)
    {
        cin>>dig_c;
        for (int j=0;j<dig_c;j++)
        {
           cin>>a;
           wynik += a;
        }
        cout<<wynik<<endl;
        wynik = 0;
    }
    return 0;
}
