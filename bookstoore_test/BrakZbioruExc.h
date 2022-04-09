#ifndef BRAK_H
#define BRAK_H
#include <stdexcept>
#include <string>
#include <iostream>
class BrakZbioruExc: public std::invalid_argument
{       public: 
        BrakZbioruExc(std::string nazwa);

};
#endif
