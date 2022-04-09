#include "ZaMaloZbioruExc.h"

ZaMaloZbioruExc::ZaMaloZbioruExc(std::string nazwa, int ilosc, int odejmowanie):
std::invalid_argument("Za malo zbioru o na identyfikatorze " + nazwa  + "\n Ilosc: " + std::to_string(ilosc) + " Proba wypozyczenia: " + std::to_string(odejmowanie)){}
