#include <iostream>

using namespace std;
string PIN;
int main()
{
    cout << "Witaj w banku" << endl;
    cout <<"podaj numer PIN:" ;
    cin >> PIN ;

    if (PIN=="1729")
    {
        cout<< "Poprawny PIN";
    }
else
    {
        cout<< "Niepoprawny PIN";
    }

    return 0;
}
