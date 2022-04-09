#include "Biblioteka.h"
#include "ZaMaloZbioruExc.h"
#include "BrakZbioruExc.h"

void Biblioteka::stan_biblioteki(){
        std::cout << "\n STAN BIBLIOTEKI: " << std::endl;
        for (auto const& x: zbiory){
        std::cout<<"Tytul: " <<x.second.second->get_tytul()
        <<  " Autor: " << x.second.second->get_autor()
        <<  " Wydawca: " << x.second.second->get_wydawca()
        <<  " Rok: " << x.second.second->get_rok()
        <<  " Max wypoz.: " << x.second.second->get_wypozyczenie()
        << " Liczba egz: " << x.second.first <<std::endl;
        }
}
Biblioteka::~Biblioteka(){
   for (auto it = zbiory.begin(); it != zbiory.end();) {
       delete it->second.second;
       it = zbiory.erase(it); 
   }
}
void Biblioteka::dokup_audiobook(std::string tytul, std::string autor, std::string wydawca, int rok, std::string czytajacy, int ilosc){
    auto search = zbiory.find("T:"+tytul+" A:" + autor);
    if(search!= zbiory.end()){
        (*search).second.first = (*search).second.first + ilosc;

        } else {
            Audiobook *a = new Audiobook(tytul, autor, wydawca, rok, czytajacy );
            zbiory.insert(std::make_pair(a->get_tytul_autor(), std::make_pair(ilosc, a)));
            
        }
   
};

void Biblioteka::dokup_ebook(std::string tytul, std::string autor, std::string wydawca, int rok, std::string format, int ilosc){
    auto search = zbiory.find("T:"+tytul+" A:" + autor);
    if(search!= zbiory.end()){
        (*search).second.first = (*search).second.first + ilosc;

        } else {
            Ebook *a = new Ebook(tytul, autor, wydawca, rok, format);
            zbiory.insert(std::make_pair(a->get_tytul_autor(), std::make_pair(ilosc, a)));
            
        }
   
};

void Biblioteka::dokup_ksiazke(std::string tytul, std::string autor, std::string wydawca, int rok, std::string okladka, int liczba_stron, int ilosc){
    auto search = zbiory.find("T:"+tytul+" A:" + autor);
    if(search!= zbiory.end()){
        (*search).second.first = (*search).second.first + ilosc;

        } else {
            Papierowa *a = new Papierowa (tytul, autor, wydawca, rok, okladka, liczba_stron);
            zbiory.insert(std::make_pair(a->get_tytul_autor(), std::make_pair(ilosc, a)));
            
        }
   
};

void Biblioteka::zwroc(std::string tytul, std::string autor, int ilosc){
    auto search = zbiory.find("T:"+tytul+" A:" + autor);
    try{
        if(search!= zbiory.end()){
            (*search).second.first = (*search).second.first + ilosc;

        } else {
            throw BrakZbioruExc("T:"+tytul+" A:" + autor);
        }
    }
    catch( const BrakZbioruExc &e){
        std::cerr<<e.what() <<std::endl;
        this->stan_biblioteki();
    }

};
void Biblioteka::wypozycz(std::string tytul, std::string autor, int ilosc){
     auto search = zbiory.find("T:"+tytul+" A:" + autor);
    try {
        if(search!= zbiory.end()){
            std::cout<<"Zbior o identyfikatorze  T: " << tytul << " A: "<< autor <<"jest w magazynie, wypozyczam" << std::endl;
            if ((*search).second.first > ilosc){
                (*search).second.first = (*search).second.first - ilosc;
            } else{
                throw ZaMaloZbioruExc("T:"+tytul+" A:" + autor, (*search).second.first, ilosc);
            }
        } else {
            throw BrakZbioruExc("T:"+tytul+" A:" + autor);
        }
    }
    catch (const BrakZbioruExc& e){
        std::cerr<<e.what();
        this->stan_biblioteki();
        }
    catch( const ZaMaloZbioruExc& e){
        std::cerr<<e.what();
        this->stan_biblioteki();
        }
}
    


std::ostream&operator << (std::ostream&os, const Biblioteka& b ){
    os << "\n STAN BIBLIOTEKI: " << std::endl;
        for (auto const& x: b.zbiory){
        os<<"Tytul: " <<x.second.second->get_tytul()
        <<  " Autor: " << x.second.second->get_autor()
        <<  " Wydawca: " << x.second.second->get_wydawca()
        <<  " Rok: " << x.second.second->get_rok()
        <<  " Max wypoz.: " << x.second.second->get_wypozyczenie()
        << " Liczba egz: " << x.second.first <<std::endl;
        }
    return os;
}
