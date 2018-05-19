#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool odczyt (string nazwapliku)
{
    ifstream plik;
    plik.open (nazwapliku.c_str(), ios::in);
    int liczba=0;
    int suma =0;
    if (!plik.good())
        return false;
    while (!plik.eof())
    {
    plik >> liczba;
    if (plik.fail())
        {
        plik.clear();
        plik.get();
       // cout << "blad wczytania"<<endl;
       // continue;
        } else
        {
        cout << liczba<< " ";
        suma+=liczba;
        }
    }
    cout<< endl<<"suma = "<<suma<<endl;
}

int main()
{
    if (!odczyt ("plik.txt"))
        cout << "nie udalo sie otworzyc pliku"<<endl;
    return 0;
}
