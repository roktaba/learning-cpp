#include <iostream>

using namespace std;

bool test(int liczba)
{
    if (liczba < 2)
        return false;
    for (int i=2;i<liczba;i++)
    {
        if (liczba%i==0)
            return false;
    }
    return true;
}

int main()
{
    int liczba, prob;
    cin>>prob;
    for (int i = 0; i < prob; i++)
    {
    cin>>liczba;
    if (test(liczba))
        cout<<"TAK"<<endl;
        else
        cout<<"NIE"<<endl;
    }
    return 0;
}
