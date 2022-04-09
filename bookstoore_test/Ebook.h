#ifndef EBOK_H
#define EBOK_H
#include "Zbior.h"
class Ebook: public Zbior{
    private:
        std::string format;
    public:
        Ebook(std::string tytul, std::string autor, std::string wydawca, int rok, std::string format);

};
#endif
