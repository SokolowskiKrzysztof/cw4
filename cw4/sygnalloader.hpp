#ifndef SYGNALLOADER_HPP
#define SYGNALLOADER_HPP
#include "sygnall.hpp"
#include <string>

class sygnalloader
{
public :

    SygnalLoader();
    Sygnal wczytajSygnal( std::string nazwaPliku);

    void zapiszSygnal(Sygnal& sygnal, std::string nazwaPliku);

};












#endif // SYGNALLOADER_HPP
