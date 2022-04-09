#include "Ebook.h"

Ebook::Ebook(std::string tytul, std::string autor, std::string wydawca, int rok, std::string format)
    : Zbior(tytul, autor, wydawca, rok, 21), format(format){};