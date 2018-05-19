#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int tablica [1000];
int ile=0, suma=0;

int main()
{
    srand(time(NULL));
    for (int i=0; i<=999; i++ )
    {
    tablica[ile]=rand()%7+4;
    suma = suma+tablica[ile];
    ile++;
    }
    cout<<"suma = "<<suma<<endl;
    return 0;
}
