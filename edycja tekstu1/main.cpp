#include <iostream>
#include <string>

using namespace std;

string konwertuj( string & sTekst )
{
    string sWynik;
    /*sTekst.erase (0,3);
    sTekst.insert (0, "[b]");
    sTekst.erase (11, 4);
    sTekst.insert (11, "[/b]");
    sTekst.erase (24, 6);
    sTekst.erase (30, 3);
    sTekst.erase (30, 4);
    sTekst.insert (30, "[b]");*/
    cout << sTekst.find("j");

    return sTekst;
}
int main()
{
    string tekst = "<b>to jest </b> testowy  \0x0987    \n napis dupa    <b>:)";
    cout << konwertuj( tekst ) << endl;
    return 0;
}
