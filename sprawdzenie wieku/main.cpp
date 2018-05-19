#include <iostream>

using namespace std;
int wiek;
int main()
{
    cout << "Ile masz lat?";
    cin >> wiek;
    if (wiek<18)
    {
        cout << "nie jestes pelnoletni i nie mozesz zostac prezydentem";
    }
    else if ((wiek>=18)&&(wiek<35))
    {
        cout<< "jestes niepelnoletni, ale nie mozesz zostac prezydentem";
    }
else
{
    cout << "jestes pelnoletni i mozesz zostac prezydentem";
}
    return 0;
}
