#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b, znak;
    int roznica;
    while (cin>>a>>znak>>b)
    {
        roznica=a.size() - b.size();
        if (roznica==0)
            roznica=a.compare(b);
        if (znak=="==")
            cout<<(roznica==0)<<endl;
        if (znak=="!=")
            cout<<(roznica!=0)<<endl;
        if (znak==">=")
            cout<<(roznica>=0)<<endl;
        if (znak=="<=")
            cout<<(roznica<=0)<<endl;
    }
    return 0;
}
