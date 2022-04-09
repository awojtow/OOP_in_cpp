#include <string>
#include <iostream>
#ifndef TOWAR_H
#define TOWAR_H
class Zbior{
    private:
    std::string tytul;
    std::string autor;
    std::string wydawca;
    int rok;
    int wypozyczenie;



    public:
    Zbior(std::string tytul, std::string autor, std::string wydawca, int rok, int wypozyczenie);
    std::string get_autor(){return autor;};
    std::string get_tytul(){return tytul;}
    std::string get_wydawca(){return wydawca;};
    int get_rok(){return rok;}
    int get_wypozyczenie(){return wypozyczenie;}
    std::string get_tytul_autor(){return "T:"+tytul+" A:" + autor;};
    
};


#endif
