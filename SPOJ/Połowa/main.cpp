#include <iostream>
#include <string>

using namespace std;

int main()
{
    int test, dlugosc;
    string wyraz;
    cin>>test;
    for (int i=0; i<test; i++)
    {
        cin>>wyraz;
        dlugosc=(wyraz.length()/2);
        for (int j=0; j<dlugosc; j++)
        {
            cout<<wyraz[j];
        }
        cout<<endl;
    }
    return 0;
}
