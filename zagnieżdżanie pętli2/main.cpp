#include <iostream>

using namespace std;

int main()
{
int ile =0;
    for( int a = 1; a < 50; a++ )
    for( int b = a + 1; b < 50; b++ )
    for( int c = b + 1; c < 50; c++ )
    for( int d = c + 1; d < 50; d++ )
    for( int e = d + 1; e < 50; e++ )
    for( int f = e + 1; f < 50; f++ )
   // cout << a << " " << b << " " << c << " " << d << " " << e << " "  << f<< endl;
    ile++;
    cout << ile<< " mozliwosci"<< endl;


    return 0;
}
