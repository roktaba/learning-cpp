#include <iostream>

using namespace std;

class samochod
{
    public:
    string marka, model;
    int rocznik;
    float przebieg;
    void wczytaj()
    {
        cout<<"podaj marke: "<<endl;
        cin>>marka;
        cout<<"podaj model: "<<endl;
        cin>>model;
        cout<<"podaj rocznik: "<<endl;
        cin>>rocznik;
        cout<<"podaj przebieg: "<<endl;
        cin>>przebieg;
    }
    void wypisz()
    {
        cout<<"marka to: "<<marka<<" model to: "<<model<<" rocznik: "<<rocznik<<" przebieg: "<<przebieg<<endl;
    }
};

int main()
{
    samochod s1;
    samochod s2;

    s1.wczytaj();
    s2.wczytaj();
    s1.wypisz();
    s2.wypisz();
    return 0;
}
