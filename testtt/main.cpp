#include <iostream>

using namespace std;

// funkcja przyjmuje jako argument wska�nik
void zwieksz_liczbe (int *liczba)
{
    *liczba+= 5;
}

int main()
{
    int numerek = 5;
    int *wsk = &numerek;

    zwieksz_liczbe(wsk); //przekazujemy wska�nik (bez operator�w)

    cout << numerek << endl;

    zwieksz_liczbe(&numerek); //przekazujemy bezpo�rednio adres zmiennej (operator &)

    cout << numerek << endl;

    return 0;
}
