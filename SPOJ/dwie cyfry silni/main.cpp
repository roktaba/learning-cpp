#include <iostream>

using namespace std;

int main()
{
    int x, test, jedn, dzies;
    cin>>test;
    for (int i=0; i<test; i++)
    {
        cin>>x;
        if (x>4)
            jedn=0;
        if (x==2)
            jedn=2;
        if (x==3)
            jedn=6;
        if (x==4)
            jedn=4;
        if ((x==0)||(x==1))
            jedn=1;

        if (x>9)
            dzies=0;
        if (x==9)
            dzies=8;
        if ((x==8) || (x==5) || (x==6) || (x==4))
            dzies=2;
        if (x==7)
            dzies=4;
        if (x<4)
            dzies=0;
        cout<<dzies<<" "<<jedn<<endl;
    }
    return(0);
}
