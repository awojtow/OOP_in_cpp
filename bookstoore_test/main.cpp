#include <iostream>
#include <string>
#include "Biblioteka.h"

int main(){
    Biblioteka b;
    std::cout<<"-----------------AUDIOBOOK-------------------"<<std::endl;
    b.dokup_audiobook("tytul_audio","autor1", "wydawca1", 2001, "czytajacy1", 10);
     std::cout << b << std::endl;
    b.dokup_audiobook("tytul_audio","autor1", "wydawca1", 2001, "czytajacy1", 5);
    b.zwroc("tytul_audio", "autor1",10);
    std::cout << b << std::endl;
    b.wypozycz("tytul_audio", "autor1",10);
    std::cout << b << std::endl;

    std::cout<<"-----------------BLEDY-------------------"<<std::endl;
    b.wypozycz("tytul_audio", "autor1",100);  
    b.wypozycz("tytul100", "autor1",1);

    std::cout<<"-----------------EBOOK-------------------"<<std::endl;
    b.dokup_ebook("tutul_ebook", "autor1", "wydawca1", 2014, "PDF",14);
    b.zwroc("tutul_ebook", "autor1",10);
    std::cout << b << std::endl;
    b.wypozycz("tutul_ebook", "autor1",10);
    std::cout << b << std::endl;

    std::cout<<"-----------------BLEDY-------------------"<<std::endl;
    b.wypozycz("tutul_ebook", "autor1",100);  
    b.wypozycz("tytul100", "autor18",1);


    std::cout<<"-----------------PAPIER-------------------"<<std::endl;
   b.dokup_ksiazke("tytul_papier", "autor1", "wydawca1",2012, "mieka", 20, 15);
    b.zwroc("tytul_papier", "autor1",10);
    std::cout << b << std::endl;
    b.wypozycz("tytul_papier", "autor1",10);
    std::cout << b << std::endl;
    std::cout<<"-----------------BLEDY-------------------"<<std::endl;
    b.wypozycz("tytul_papier", "autor1",100);  
    b.wypozycz("tytul100", "autor18",1);

    return 0;
}
