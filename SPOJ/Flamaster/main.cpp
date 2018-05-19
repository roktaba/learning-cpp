#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tests, lenght, counter;
    string wyraz;
    cin>>tests;
    for (int i=0; i<tests; i++)
    {
        cin>>wyraz;
        lenght=wyraz.size();
        for (int j=0; j<lenght; j++)
        {
                counter=1;
            if (wyraz[j]!=wyraz[j+1])
                cout<<wyraz[j];
                else
                if (wyraz[j]!=wyraz[j+2])
                cout<<wyraz[j];
                else
                {
                char wyraz2=wyraz[j];
                while (wyraz2==wyraz[j+1])
                    {
                        counter++;
                        j++;
                    }
                cout<<wyraz2<<counter;
                }
        }
    cout<<endl;
    }
    return 0;
}
