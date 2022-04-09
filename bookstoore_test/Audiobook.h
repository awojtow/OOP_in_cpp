#ifndef AUDIO_H
#define AUDIO_H
#include "Zbior.h"
class Audiobook: public Zbior{
    private:
        std::string czytajacy;
    public:
        Audiobook(std::string tytul, std::string autor, std::string wydawca, int rok, std::string czytajacy);

};
#endif
