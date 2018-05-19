#include <iostream>

using namespace std;

// funkcja przyjmuje jako argument wskaünik
void zwieksz_liczbe (int *liczba)
{
    *liczba+= 5;
}

int main()
{
    int numerek = 5;
    int *wsk = &numerek;

    zwieksz_liczbe(wsk); //przekazujemy wskaünik (bez operatorÛw)

    cout << numerek << endl;

    zwieksz_liczbe(&numerek); //przekazujemy bezpoúrednio adres zmiennej (operator &)

    cout << numerek << endl;

    return 0;
}
