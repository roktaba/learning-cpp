#include <iostream>

using namespace std;

int main()
{
    int ilosc_prob, a, b, c;
    cin>>ilosc_prob;
    for (int i=0; i<ilosc_prob; i++)
    {
    cin>>a>>b;
    c=a*b;
    while(a!=b){
    if(a>b) a=a-b;
    else b=b-a;
    }
    cout<<c/a<<endl;
    }
    return 0;
}
