#include <iostream>

using namespace std;

void sortowanie_babelkowe(int *tab, int n)
{
    for (int j = 0; j < n; j++)
    {
    for (int i = 0; i < n-1; i++)
    {
        if (tab[i]<tab[i+1])
        {
            int x = tab[i];
            tab[i]=tab[i+1];
            tab[i+1]=x;
        }
    }
    }
}

int main()
{
    int ile;
    cout<<"Ile liczb do sortowania?"<<endl;
    cin>>ile;
    int *tabela;
    tabela = new int [ile];
    cout<<"podaj liczby do sortowania:"<<endl;
    for (int i = 0; i < ile; i++)
    {
        cin>>tabela[i];
    }
    sortowanie_babelkowe(tabela, ile);
    for (int k = 0; k<ile; k++)
    {
        cout<<tabela[k]<<" ";
    }
    delete [] tabela;
    return 0;
}
