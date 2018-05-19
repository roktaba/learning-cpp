#include <iostream>

using namespace std;

int main()
{
    int ile =1;
    for (int e = 1; e < 4 ;e++)
    for (int d = 1; d < 4 ;d++)
    {
    for (int c = 1; c < 4 ;c++)
    {
    for (int b = 1; b < 4 ;b++)
    {
    for (int a = 1; a < 4; a++)
    {
        cout <<e<< " " <<d<< " " <<c<< " " << b<< " " << a << endl;
        ile++;
    }
    }
    }
    }
    cout << ile <<" mozliwosci"<<endl;
    return 0;
}
