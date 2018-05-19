#include <iostream>
#include <string>

using namespace std;

bool szukaj( string & tekst, string wyraz1, string wyraz2 )
{
    size_t znalezione1=tekst.find (wyraz1);
    size_t znalezione2=tekst.find (wyraz2);
    if(( znalezione1 == string::npos )||( znalezione2 == string::npos))
    {
        return false;
    }
    else
        return true;
}

void wypiszWynik( bool czyZnaleziono )
{
    if( czyZnaleziono )
         cout << "Znaleziono" << endl;
    else
         cout << "Nie znaleziono" << endl;

}

int main()
{
    string napis = "Zadanie domowe z kursu C++ (http://cpp0x.pl) - najlepszy kurs C++ w Internecie!";
    wypiszWynik( szukaj( napis, "ada", "kurs" ) );
    wypiszWynik( szukaj( napis, "ada", "taki" ) );
    wypiszWynik( szukaj( napis, "C++", "cpp0x" ) );
    wypiszWynik( szukaj( napis, "C#", "cpp0x" ) );
    return 0;
}
