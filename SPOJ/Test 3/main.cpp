#include <iostream>

using namespace std;

int main()
{
    bool test=true;
    int x=0, last=0, counter=0;
    cin>>last;
    cout<<last<<endl;
    while (test)
    {
        cin>>x;
        if ((x==42)&&(last!=42))
            counter++;
        last=x;
        cout<<x<<endl;
        if (counter==3)
            test=false;
    }
    return 0;
}
