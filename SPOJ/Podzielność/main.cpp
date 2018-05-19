#include <iostream>

using namespace std;

int main()
{
    int tests, n, x, y;
    cin>>tests;
    for (int i=0; i<tests; i++)
    {
        cin>>n>>x>>y;
        for (int j=2; j<n; j++)
        {
            if ((j%x==0)&&(j%y!=0))
                cout<<j<<" ";
        }
    }
    return 0;
}
