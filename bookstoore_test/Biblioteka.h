#ifndef BIBLIO_H
#define BIBLIO_H
#include "Zbior.h"
#include "Audiobook.h"
#include "Ebook.h"
#include "Papierowa.h"
#include <string>
#include <map>
#include <iostream>
class Biblioteka{
    private:
      void stan_biblioteki();
      std::map <std::string ,std::pair <int, Zbior*>> zbiory;
    public:
        ~Biblioteka();
        void dokup_audiobook(std::string tytul, std::string autor, std::string wydawca, int rok, std::string czytajacy, int ilosc);
        void dokup_ebook(std::string tytul, std::string autor, std::string wydawca, int rok, std::string format, int ilosc);
        void dokup_ksiazke(std::string tytul, std::string autor, std::string wydawca, int rok, std::string okladka, int liczba_stron, int ilosc);
        void zwroc(std::string tytul, std::string autor, int ilosc);
        void wypozycz(std::string tytul, std::string autor, int ilosc);
    friend std::ostream& operator<<(std::ostream&os, const Biblioteka& b );

};

std::ostream&operator << (std::ostream&os, const Biblioteka& b );
#endif
