#include <iostream>

using namespace std;

int nwd(int a, int b)
{
    int c=a*b;
    while(a!=b){
    if(a>b) a=a-b;
    else b=b-a;
    }
    return a;
}

int main()
{
    int ilosc_prob, a, b;
    cin>>ilosc_prob;
    for (int i=0; i<ilosc_prob; i++)
    {
    cin>>a>>b;
    cout<<nwd(a,b)<<endl;
    }
    return 0;
}
