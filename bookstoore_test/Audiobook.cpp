#include "Audiobook.h"

Audiobook::Audiobook(std::string tytul, std::string autor, std::string wydawca, int rok, std::string czytajacy): Zbior(tytul, autor, wydawca, rok, 10), czytajacy(czytajacy){};