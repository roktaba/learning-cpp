#include <iostream>

using namespace std;

int main()
{
    int tests, dig_c, a;
    int *tabp, *tabn;
    cin>>tests;
    for (int i=1; i<=tests; i++)
    {
        int p=0, n=0;
        cin>>dig_c;
        tabp = new int [((dig_c/2)+2)];
        tabn = new int [((dig_c/2)+2)];
        for (int j = 1; j<=dig_c; j++)
        {
            cin>>a;
            if (j%2==0)
            {
                tabp[p]=a;
                p++;
            }
            else
            {
                tabn[n]=a;
                n++;
            }
        }
        for (int i=0; i<p; i++)
        {
            cout<<tabp[i]<<" ";
        }
        for (int i=0; i<n; i++)
        {
            cout<<tabn[i]<<" ";
        }
        delete [] tabp;
        delete [] tabn;
    }
    return 0;
}
