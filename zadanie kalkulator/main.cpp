#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

float x, y;
char wybor;

int main()
{
    for (;;)
    {
    cout << "podaj pierwsza liczbe: " << endl;
    cin >> x ;
    cout << "podaj druga liczbe: " << endl;
    cin >> y ;

    cout << "jesli chcesz pomnozyc wcisnij 1" << endl;
    cout << "jesli chcesz podzielic wcisnij 2" << endl;
    cout << "jesli chcesz dodawac wcisnij 3" << endl;
    cout << "jesli chcesz odejmowac wcisnij 4" << endl;
    cout << "jesli chcesz zakonczyc wcisnij 5" << endl;
    cout<<endl;
    wybor=getchar();

    switch(wybor)
    {
    case '1':
        {
        cout<<"Suma= "<<x+y;
        }
        break;
    case '2':
        {
        cout<<"roznica= "<<x-y;
        }
        break;
    case '3':
        {
        cout<<"iloczyn= "<<x*y;
        }
        break;
    case '4':
        {
            if (y==0) cout<< "nie dzielimy przez zero";
       else cout<<"Iloraz= "<<x/y;
       break;
        }
    case '5':
        exit(0);
        default: cout<<"Nie ma takiej opcji";
        break;
    }
    getchar();getchar();
    system("cls");
    }
    return 0;
    }
