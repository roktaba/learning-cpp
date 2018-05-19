#include <iostream>
#include <math.h>

using namespace std;

class Punkt
{
   float x,y;
   string nazwa;

public:
   void wyswietl()
   {
      cout<<nazwa<<"("<<x<<","<<y<<")"<<endl;
   }
   Punkt(string n="S", float a=0, float b=0)
   {
      nazwa = n;
      x = a;
      y = b;
   }
};

class Kolo :public Punkt
{
   string nazwa;
protected:
   float r;

public:
   void wyswietl()
   {
      cout<<"Kolo o nazwie: "<<nazwa<<endl;
      cout<<"Srodek kola: "<<endl;
      Punkt::wyswietl();
      cout<<"Promien: "<<r<<endl;
      cout<<"Pole kola : "<<M_PI*r*r<<endl;
   }

   Kolo(string nk="Kolko", string np="S", float a=0, float b=0, float pr=1)
   :Punkt(np,a,b)
   {
      nazwa = nk;
      r = pr;
   }
};

class Kula :public Kolo
{
    string nazwa;

public:

    void wyswietl()
    {
        Kolo::wyswietl();
        cout<<"objetosc : "<<nazwa<<" wynosi: "<<4.0/3.0*M_PI*r*r*r<<endl;;
    }

    Kula(string nku="Gruba Kula", string nk="Kolko", string np="S", float a=0, float b=0, float r=1)
    :Kolo(nk, np, a, b, r)
    {
        nazwa=nku;
    }
};

int main()
{
    Kula k1;
    k1.wyswietl();
    return 0;
}
