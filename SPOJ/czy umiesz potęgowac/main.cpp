#include <iostream>

using namespace std;

int main()
{
    int tests, p, n, wynik;
    cin>>tests;
    for (int i=0; i<tests; i++)
    {
        cin>>p>>n;
        if((p%10)==0)
            wynik=0;
        if((p%10)==1)
            wynik=1;
        if((p%10)==5)
            wynik=5;
        if((p%10)==6)
            wynik==6;
        if(((p%10)==4)&&((n%2)==0))
            wynik=6;
        if(((p%10)==4)&&((n%2)!=0))
            wynik=4;
        if(((p%10)==9)&&((n%2)==0))
            wynik=1;
        if(((p%10)==9)&&((n%2)!=0))
            wynik=9;
        if(((p%10)==2)&&((n%4)==1))
            wynik=2;
        if(((p%10)==2)&&((n%4)==2))
            wynik=4;
        if(((p%10)==2)&&((n%4)==3))
            wynik=8;
        if(((p%10)==2)&&((n%4)==0))
            wynik=6;
        if(((p%10)==3)&&((n%4)==1))
            wynik=3;
        if(((p%10)==3)&&((n%4)==2))
            wynik=9;
        if(((p%10)==3)&&((n%4)==3))
            wynik=7;
        if(((p%10)==3)&&((n%4)==0))
            wynik=1;
        if(((p%10)==7)&&((n%4)==1))
            wynik=7;
        if(((p%10)==7)&&((n%4)==2))
            wynik=9;
        if(((p%10)==7)&&((n%4)==3))
            wynik=3;
        if(((p%10)==7)&&((n%4)==0))
            wynik=1;
        if(((p%10)==8)&&((n%4)==1))
            wynik=8;
        if(((p%10)==8)&&((n%4)==2))
            wynik=4;
        if(((p%10)==8)&&((n%4)==3))
            wynik=2;
        if(((p%10)==8)&&((n%4)==0))
            wynik=6;
        if (n==0)
        wynik=1;
        cout<<wynik<<endl;
    }
    return 0;
}
