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
    char tabela;
    int test1=0, test2=0;
    for(;;)
    {
    plik >> tabela;
    test1 = plik.tellg();
    plik.seekg( 3, ios::cur );
    test2 = plik.tellg();
    if (test1==test2)
        break;
    cout << tabela<< endl;
    }
}

int main()
{
    if (!odczyt ("plik2.mp4"))
        cout << "nie udalo sie wczytac pliku"<<endl;
    return 0;
}
