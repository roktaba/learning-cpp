#include <iostream>

using namespace std;

double n[19];

int main()
{
    n[0]=1;
    cout <<"1: " << n[0]<<endl;
    for (int i=1; i<20 ;i++)
    {
    n[i]= (1+i*5);
    cout << i+1 << ": " <<n[i]<< endl;
    }
    return 0;
}
