#ifndef PAP_H
#define PAP_H
#include "Zbior.h"
class Papierowa: public Zbior{
    private:
        std::string okladka;
        int liczba_stron;
    public:
        Papierowa(std::string tytul, std::string autor, std::string wydawca, int rok, std::string okladka, int liczba_stron);

};
#endif
