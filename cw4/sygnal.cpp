#include "sygnal.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void sygnal::wczytywanie(string n)
{
    ifstream plik (n);
    string line;
    while (getline(plik,line))
{
    stringstream aa(line);
    double _t, _x;
    aa>>_t;
    aa.ignore();
    aa>>_x;
    cout<<_t<<endl;
    cout<<_x<<endl;
    _zmienne.push_back(Probka(_t,_x));
}
plik.close();
}

void sygnal::odczytywanie()
{
    for (int i =0; i < _zmienne.size(); i++)
    {
    cout<<_zmienne[i].t<<" ";
    cout<<_zmienne[i].x<<endl;
    }
}

void sygnal::zapis(string nazwa_pliku)
{
   ofstream plik (nazwa_pliku);

   for (int i=0;i<_zmienne.size();i++)
   {
       plik<<_zmienne[i].t <<", "<<_zmienne[i].x<< endl;
   }
   plik.close();
}
double sygnal::sygnal_minimum()
{
    double min=10000;
    for (int i=0;i<_zmienne.size();i++)
    {
        if(_zmienne[i].x<min){
            min=_zmienne[i].x;
        }
    }return min;
}
double sygnal::sygnal_miximum()
{
    double max=-10000;
    for (int i=0;i>_zmienne.size();i++)
    {
        if(_zmienne[i].x>max){
            max=_zmienne[i].x;
        }
    }return max;
}


double sygnal::oblicz_Dlugosc()
{double a=-100000;

double u=100000;

double d;

   for(int i=0;i<_zmienne.size();i++)
   {

       if(_zmienne[i].x>a)
        {
        a=_zmienne[i].x;
       }
       if(_zmienne[i].x<u)
        {
        u = _zmienne[i].x;
       }

   return d;
}
}

double sygnal::oblicz_Srednia()
{ double o=0;
    for (int i=0;i<_zmienne.size();i++)
        { o=o+ _zmienne[i].x;  }
   if(_zmienne.size()>0)
    {
       o=o/_zmienne.size();
   }
       double oblicz_Srednia;
return o;

}

double sygnal::calka()
{
    double dt1, dpole1, calka;
    for (int i = 0; i <= (_zmienne.size()) -1; i++)
    {
     dt1 = _zmienne[i + 1].t - _zmienne[i].t;
     dpole1 = (_zmienne[i].x + _zmienne[i + 1].x) * dt1 / 2;
    calka = calka + dpole1;
    }cout<<"calka wynosi  "<<  calka<<endl;
   return calka;

}
