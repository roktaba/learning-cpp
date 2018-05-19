#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
char wybor;
int sciany, wynik, ile;
bool test;

int losowanie(int a)
{
    cout<<"rzut koscia..."<<endl;
    Sleep(500);
    return rand()%a+1;
}

int main()
{
    srand(time(NULL));
    for(;;)
    {
    cout<<endl;
    cout << "MENU GLOWNE" << endl;
    cout << "-----------------" << endl;
    cout << "Wybierz kosc:" << endl;
    cout << "1. K2" << endl;
    cout << "2. K4" << endl;
    cout << "3. K6" << endl;
    cout << "4. K8" << endl;
    cout << "5. K10" << endl;
    cout << "6. K12" << endl;
    cout << "7. K20" << endl;
    cout << "8. K100" << endl;
    cout << "9. Inne" << endl;
    cout << "0. Koniec programu" << endl;
    cout << endl;

    wybor=getch();
    switch(wybor)
    {
        case '1':
        cout << "twoj wynik K2 to: "<<losowanie(2)<<endl;
        break;
        case '2':
        cout << "twoj wynik K4 to: "<<losowanie(4)<<endl;
        break;
        case '3':
        cout << "twoj wynik K6 to: "<<losowanie(6)<<endl;
        break;
        case '4':
        cout << "twoj wynik K8 to: "<<losowanie(8)<<endl;
        break;
        case '5':
        cout <<"twoj wynik K10 to: "<< losowanie(10)<<endl;
        break;
        case '6':
        cout << "twoj wynik K12 to: "<<losowanie(12)<<endl;
        break;
        case '7':
        cout << "twoj wynik K20 to: "<<losowanie(20)<<endl;
        break;
        case '8':
        cout <<"twoj wynik K100 to: "<< losowanie(100)<<endl;
        break;
        case '9':
        {
                do
                {
                cin.clear();
                cin.sync();
                cout << "ile scian ma kosc?"<<endl;
                cin>>sciany;
                test=cin.good();
                if (test==0)
                    cout<<"to nie liczba!"<<endl;
                } while (test==0);
        }
        cout << "twoj wynik K"<<sciany<<" to: "<<losowanie(sciany)<<endl;
    cin.clear();
    cin.sync();
        getchar();
        break;
        case '0':
        exit(0);
        break;
        default: cout << "nie ma takiej opcji"<<endl;
    }
    cin.clear();
    cin.sync();
    getchar();
            system ("cls");
    }
    return 0;
}
