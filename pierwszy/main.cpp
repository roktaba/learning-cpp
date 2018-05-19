#include <iostream>

using namespace std;
int uczniowie, cukierki,x,y;


int main()
{
    cout << "Ile uczniow jest w Twojej klasie:";
    cin >> uczniowie;
    cout << "ile cukierkow:";
    cin >> cukierki;
    x = cukierki / (uczniowie - 1);
    y = cukierki - x*(uczniowie-1);
    cout << "cukierkow dla jasia:" << y;

    cout << "cukierkow dla kazdego:" << x ;
    return 0;
}
