#include <iostream>

using namespace std;

string imie;
int liczba;

int main()
{
    cout << "podaj imie";
    cin >> imie;
    cout << "podaj liczbe";
    cin >> liczba;
    for (int i=1; i<=liczba; i++)
    cout <<i<<". "<<imie<<endl;
    return 0;
}
