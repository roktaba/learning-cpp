#include <iostream>
#include <string>

using namespace std;

void wczytajOsobe ( string & im, int & wie)
{
    cout << "podaj imie i nazwisko" << endl;
    cin.sync();
    getline(cin, im);

    do
    {
    cin.clear();
    cin.sync();
    cout << "podaj wiek" << endl;
    cin >> wie;
    if (cin.good() == false)
        cout << "to nie liczba!"<<endl;
    } while (cin.good() == false );
}

void wypiszOsobe ( string imw, int wiew)
{
    cout << "Imie i Nazwisko: "<< imw <<endl;
    cout << "Wiek: "<< wiew<<endl;
}

int main()
{
    string imie[ 2 ];
    int wiek[ 2 ];
    for( int i = 0; i < 2; i++ )
         wczytajOsobe( imie[ i ], wiek[ i ] );

    for( int i = 0; i < 2; i++ )
         wypiszOsobe( imie[ i ], wiek[ i ] );

    return 0;
}
