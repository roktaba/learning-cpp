#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba, strzal, ile=0;

int main()
{
    cout << "Witaj! Pomyslalem sobie liczbe z zakresu od 1 do 100" << endl;
   srand(time(NULL));
    liczba = rand()%100+1;
    while(strzal!=liczba)
    {
        ile++;
     cout<<"zgadnij jaka (to Twoja :"<<ile<<" proba)";
     cin >>strzal;
     if(strzal==liczba)
        cout<<"udalo sie! Wygrywasz w "<<ile<<" probie"<<endl;
     else if(strzal>liczba)
        cout<<"za duzo"<<endl;
     else if(strzal<liczba)
        cout<<"za malo"<<endl;

    }
    system("pause");
    return 0;
}
