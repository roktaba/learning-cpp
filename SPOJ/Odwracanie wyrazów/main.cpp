#include <iostream>
#include <string>

using namespace std;

int main()
{
    string wyraz;
    int wielkosc;
    while (cin>>wyraz)
    {
        wielkosc=wyraz.size();
        for (int i=wielkosc-1; i>=0; i--)
        {
            cout<<wyraz[i];
        }
        cout<<endl;
    }
    return 0;
}
