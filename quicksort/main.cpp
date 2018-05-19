#include <iostream>

using namespace std;

void quicksort (int *tab, int lewy, int prawy)
{
    int os, x, i, j;
    i = lewy;
    j = prawy;
    os=tab[(lewy+prawy)/2];
    do
    {
        while (tab[i]<os) i++;
        while (tab[j]>os) j--;
        if (i<=j)
        {
            x=tab[i];
            tab[i]=tab[j];
            tab[j]=x;
            i++;
            j--;
        }
    }
    while (i<=j);
    if (j>lewy) quicksort(tab, lewy, j);
    if (i<prawy) quicksort(tab, i, prawy);
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
    quicksort(tabela,0,ile-1);
    for (int k = 0; k<ile; k++)
    {
        cout<<tabela[k]<<" ";
    }
    delete [] tabela;
    return 0;
}
