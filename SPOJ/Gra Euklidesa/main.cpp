#include <iostream>

using namespace std;

int main()
{
    int tests, a=0, b=0;
    cin>>tests;
    for (int i=0; i<tests; i++)
    {
        cin>>a>>b;
        while (a!=b)
        {
            if (a>b)
                a=a-b;
            if (a<b)
                b=b-a;
        }
        cout<<a+b<<endl;
    }
    return 0;
}
