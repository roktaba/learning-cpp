#include <iostream>
#include <fstream>
#include <string>


using namespace std;

bool odczyt (string nazwapliku)
{

}

bool czyNapotkanoZnakNowegoWiersza( ifstream & plik )
{
    char cZnak;
    for(;; ) //niesko�czona p�tla
    {
        plik.clear();
        cZnak = plik.peek(); //sprawdzamy jaki kolejny znak zostanie zwr�cony przez operacj� odczytu
        if( plik.fail() || plik.bad() )
             return false; //wyst�pi� b��d odczytu danych

        if( !isspace( cZnak ) )
             return false; //pobrany znak nie jest bia�ym znakiem

        plik.get( cZnak ); //odczytujemy bia�y znak z pliku
        if( plik.fail() || plik.bad() )
             return false; //wyst�pi� b��d odczytu danych

        if( cZnak == '\n' )
             return true;

    } //for
}

int main()
{
    string nazwapliku = "plik.txt";
    ifstream plik;
    plik.open (nazwapliku.c_str(), ios::in);
    int liczba=0;
    int suma =0;
    int linia = 1;
    bool test = true;
    if (!plik.good())
    cout << "nie udalo sie otworzyc pliku"<<endl;
    while (!plik.eof())
    {
    plik >> liczba;
    if (plik.fail())
        {
        plik.clear();
        plik.get();
        cout << "blad wiersza nr: "<< linia<<endl;
        test=false;
        }
    suma+=liczba;
        if (czyNapotkanoZnakNowegoWiersza(plik))
        {
        if (test==true)
            cout <<suma<<endl;
        suma = 0;
        test = true;
                linia++;
        }
    }
        if (test==true)
        cout<<suma<<endl;
    return 0;
}
