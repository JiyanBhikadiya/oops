#include "Musician.h"

Musician::Musician(){
    instrument_main = "null";
    experience_main = 0;
}

Musician::Musician(std::string instrument, int experience){
    instrument_main = instrument;
    experience_main = experience;
}

std::string Musician::get_instrument(){
    return instrument_main;
}

int Musician::get_experience(){
    return experience_main;
}