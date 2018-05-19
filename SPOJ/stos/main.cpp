#include <iostream>

using namespace std;

int tablica [11];
int i = 0;
char komenda;

void dodawanie()
{
if (i < 10)
    {
    i++;
    cin>>tablica[i];
    cout<<":)"<<endl;
    }
    else
    {
        cout<<":("<<endl;
    }
}

void odejmowanie()
{
    if (i > 0)
        {
        cout<<tablica[i]<<endl;
        i--;
        }
        else
        {
        cout<<":("<<endl;
        }
}

int main()
{
        while (cin>>komenda)
        {
        if (komenda == '+')
                dodawanie();
        if (komenda == '-')
                odejmowanie();
        }
    return 0;
}
