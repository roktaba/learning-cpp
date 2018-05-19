#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool odczyt (string nazwapliku)
{
    ifstream plik;
    plik.open (nazwapliku.c_str());
    if (!plik.good())
        return false;
        int tablica[100];
        int wynik=0;
        for (int a=0; a > -1; a++)
        {
            plik >> tablica[a];
            wynik += tablica[a];
            if (!plik.good())
            {
                cout << "suma liczb = "<< wynik<< endl;
                plik.close();
                break;
            }
        }

}

int main()
{
    if (!odczyt ("plik.txt"))
        cout << "nie udalo sie wczytac pliku"<<endl;
    return 0;
}
