#include <iostream>

using namespace std;

void wypiszTablice( int tablica[], int ile )
{
    for( int indeks = 0; indeks < ile; indeks++ )
         cout << tablica[ indeks ] << endl;

}

int sumujLiczby( int tablica[], int ile )
{
    int oblicz = 0;
    int cos = 0;

do
{
oblicz = oblicz + tablica[cos];
cos++;
} while (ile>cos);

    return oblicz;
}

int main()
{
    int dane[ 5 ];
    dane[ 0 ] = 11;
    dane[ 1 ] = 5;
    dane[ 2 ] = 7;
    dane[ 3 ] = 8;
    dane[ 4 ] = 2;
    wypiszTablice( dane, 5 );
    int wynik = sumujLiczby( dane, 5 );
    cout << "Suma liczb wynosi = " << wynik << endl;
    return 0;
}
