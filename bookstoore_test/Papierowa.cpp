#include "Papierowa.h"

Papierowa::Papierowa(std::string tytul, std::string autor, std::string wydawca, int rok, std::string okladka, int liczba_stron)
    : Zbior(tytul, autor, wydawca, rok, 30), okladka(okladka), liczba_stron(liczba_stron){};