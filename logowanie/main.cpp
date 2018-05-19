#include <iostream>

using namespace std;
string login, haslo ;

int main()
{
    cout << "Podaj login:";
    cin >> login;
    cout << "podaj haslo:";
    cin >> haslo;

    if ((login=="admin")&&(haslo=="Szarlotka"))
    {
        cout <<"udalo sie zalogowac";
    }
    else
    {
        cout<<"nie udalo sie zalogowac";
    }
    return 0;
}
