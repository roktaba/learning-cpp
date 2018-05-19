#include <iostream>
#include <fstream>

using namespace std;
string imie, nazwisko;
int nr;

int main()
{
    cout << "podaj imie: ";
    cin >> imie;
    cout<< "podaj nazwisko: ";
    cin>> nazwisko;
    cout<< "podaj nr telefonu: ";
    cin >>nr;

    fstream plik;
    plik.open("wizytowka.txt", ios::out | ios::app);

    plik<<imie<<endl;
    plik<<nazwisko<<endl;
    plik<<nr<<endl;
    plik.close();
    return 0;
}
