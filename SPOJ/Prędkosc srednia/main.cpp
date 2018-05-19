#include <iostream>

using namespace std;

int main()
{
    int ile_prob, v1, v2;
    cin>>ile_prob;
    for (int i=0;i<ile_prob;i++)
    {
        cin>>v1>>v2;
        cout<<2*v1*v2/(v1+v2)<<endl;
    }
    return 0;
}
