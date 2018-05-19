#include <iostream>
#include <vector>

using namespace std;

int main()
{
        vector <int> tab;
        int x;
        while (cin>>x)
        {
            tab.push_back(x);
        }
        int y = tab.size();
        for (y ; y > 0; y--)
        {
            cout<<tab[y-1]<<" ";
        }
    return 0;
}
