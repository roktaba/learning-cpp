#include <iostream>

using namespace std;

int wczytajLiczbe()
{
    int x;
    cout << "podaj liczbe" <<endl;
    cin >> x;
    return x;
}

int main()
{
    cout << "Podaj liczbe: ";
    int liczba = wczytajLiczbe();
    cout << "Podales liczbe: " << liczba << std::endl;
    return 0;
}
