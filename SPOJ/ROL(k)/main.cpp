#include <iostream>

using namespace std;

int main()
{
    int *tabela, *tabela2;
    int a, ile, poza=0;
    cin>>a>>ile;
    tabela = new int [a+1];
    tabela2 = new int [a+1];
    for (int i=1; i<=a; i++)
    {
        cin>>tabela[i];
    }
    for (int i=1; i<=a; i++)
    {
        if ((i-ile)>0)
            cout<<tabela[i]<<" ";
        else
        {
            tabela2[i]=tabela[i];
            poza++;
        }
    }
    for (int i=1; i<=poza; i++)
    {
        cout<<tabela2[i]<<" ";
    }

    delete [] tabela;
    delete [] tabela2;
    return 0;
}
