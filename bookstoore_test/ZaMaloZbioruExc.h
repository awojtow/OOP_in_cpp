#ifndef MALO_H
#define MALO_H
#include <stdexcept>
#include <string>

class ZaMaloZbioruExc: public std::invalid_argument
{
    public: 
        ZaMaloZbioruExc(std::string nazwa, int ilosc, int odejmowanie);

};
#endif
