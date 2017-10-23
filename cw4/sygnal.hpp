#ifndef SYGNAL_HPP
#define SYGNAL_HPP
#include <vector>
#include "probka.hpp"
#include <string>


class sygnal {
public:
void wczytywanie(std::string n);
void zapis (std::string nazwa_pliku);
void odczytywanie();
double oblicz_Dlugosc();
double oblicz_Srednia();
double sygnal_minimum();
double sygnal_miximum();
double calka();





private:
std::vector <Probka> _zmienne;
};

#endif
