#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <stdio.h>

using namespace std;

int wybrane[9];
int wylosowane[ 8 ];

bool czyBylaWylosowana( int iLiczba, int tab[], int ile )
{
    if( ile <= 0 )
         return false;

    int i = 0;
    do
    {
        if( tab[ i ] == iLiczba )
             return true;

        i++;
    } while( i < ile );

    return false;
}

int wylosuj()
{
    return rand() % 10 ;
}

int main()
{
    srand( time( NULL ) );

    cout << "podaj 10 liczb calkowitych"<<endl;
    cout << "pierwsza: "<< endl;
    cin >> wybrane[0];
        cout << "druga: "<< endl;
    cin >> wybrane[1];
        cout << "trzecia: "<< endl;
    cin >> wybrane[2];
        cout << "czwarta: "<< endl;
    cin >> wybrane[3];
        cout << "piata: "<< endl;
    cin >> wybrane[4];
        cout << "szosta: "<< endl;
    cin >> wybrane[5];
        cout << "siodma: "<< endl;
    cin >> wybrane[6];
        cout << "osma: "<< endl;
    cin >> wybrane[7];
        cout << "dziewiata: "<< endl;
    cin >> wybrane[8];
        cout << "dziesiata: "<< endl;
    cin >> wybrane[9];
                system ("cls");

    int wylosowanych = 0;
    do
    {
        int liczba = wylosuj();
        if( czyBylaWylosowana( liczba, wylosowane, wylosowanych ) == false )
        {
            wylosowane[ wylosowanych ] = liczba;
            cout << wybrane[liczba]<<endl;
            wylosowanych++;
        }
    } while( wylosowanych < 8 );
    getchar();getchar();
    return 0;
}
