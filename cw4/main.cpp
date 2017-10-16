#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
#include <vector>
#include <sstream>
using namespace std;


struct Probka {
double t;
double x;
Probka(double _t,double _x)
{
t=_t;
x=_x;}
};

vector <Probka> wczytaj (string n)
{
    vector <Probka> tablica;
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
    tablica.push_back(Probka(_t,_x));
} return(tablica);
}
void zapis(vector <Probka> dane, string nazwa)
{
   ofstream plik (nazwa);

   for (int i=0;i<dane.size();i++)
   {
       plik<<dane[i].t <<", "<<dane[i].x<< endl;
   }
   plik.close();
}

double obliczDlugosc (vector<Probka> jjj)
{
    double e=1000000;
    double a=-1000000;

        double d;
    for(int i=0;i<jjj.size();i++)

    {

        if(jjj[i].x>a)
        {


            a=jjj[i].x;
            }

        if(jjj[i].x<e)
        {


        e=jjj[i].x;
        }

    }

    cout<<endl;
    cout<<a<<endl;
    cout<<e<<endl;
    d=a-e;
    cout<<"dlugosc wynosi"<<d<<endl;
    cout<<jjj.size()<<endl;
    return d;
}
int main(int argc,char* argv[])
{

   if (argc != 2) {
 return -1;
}
vector <Probka> kk=wczytaj(argv [1]);
obliczDlugosc(kk);
string nazwa_pliku = argv[1];
cout << "Odczytuje plik: " << nazwa_pliku << endl;

zapis (kk, "nazwa.csv");
    cin.get();
    return 0;
}
