#include <iostream>

using namespace std;

int main()
{
    int tests;
    char pesel[12];
    cin>>tests;
    for (int i=0; i<tests; i++)
    {
        for (int x=0; x<11; x++)
        {
            cin>>pesel[x];
        }
        int t[12];
        for (int i=0; i<11; i++)
        {
            t[i]=(pesel[i] - '0');
        }
        int wynik =(t[0]*1+t[1]*3+t[2]*7+t[3]*9+t[4]*1+t[5]*3+t[6]*7+t[7]*9+t[8]*1+t[9]*3+t[10]*1);
        if ((wynik%10==0)&&(wynik>0))
            cout<<"D"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
