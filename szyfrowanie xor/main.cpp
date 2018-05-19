#include <iostream>
#include <string>
#include <bitset>
#include <fstream>
#include <conio.h>

using namespace std;

void txttobin()
{
    string binstring2, bin2;
    string haslo = " ";
    char litera2 = ' ';
    cout << "podaj haslo-klucz: " << endl;
    getline (cin, haslo);
    for (int wp1 = 0; wp1 < haslo.size(); wp1++)
        {
        litera2 = haslo[wp1];
        bitset <8> binaryh(litera2);


        bin2 = binaryh.to_ulong();
        binstring2 += bin2;
        }

    string binstring, bin;
    string tekst = " ";
    char litera1 = ' ';
    cout << "podaj tekst do zaszyfrowania: " << endl;
    getline (cin, tekst);
    cout << "Twoj tekst w kodzie binarnym to: ";
    for (int wordPosition = 0; wordPosition < tekst.size(); ++wordPosition)
        {
        litera1 = tekst[wordPosition];
        bitset <8> binary(litera1);
        cout << binary;

        bin = binary.to_string();
        binstring += bin;
        }

        cout <<endl<< binstring.size()<<endl;

        cout << endl;
}




void odszyfrowanie()
{

}

int main()
{
    cout << "Program do szyfrowania XOR"<< endl;
    cout << "--------------------------"<< endl;
    char wybor;
    cout << "1. Szyfrowanie"<<endl;
    cout << "2. Odszyfrowywanie"<< endl;
    wybor=getch();
    switch(wybor)
    {
        case '1':
            txttobin();
            break;
        case '2':
            odszyfrowanie();
            break;
        default:
            {
                cout << "Bledny wybor!"<<endl;
                break;
            }
    }
    return 0;
}
