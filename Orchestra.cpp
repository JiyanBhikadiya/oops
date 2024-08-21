#include "Orchestra.h"
#include <iostream>

using namespace std;

Orchestra::Orchestra(){
    size_main = 0;
    current_size = 0;
    members = new Musician[size_main];
}

Orchestra::Orchestra(int size){
    size_main = size;
    current_size = 0;
    members = new Musician[size_main];
}

int Orchestra::get_current_number_of_members(){
    return size_main;
}

bool Orchestra::has_instrument(std::string instrument){
    for(int i=0;i<size_main;i++){
        if(members[i].get_instrument() == instrument){
            return true;
        }
    }
    return false;
}

Musician* Orchestra::get_members() {
    return members;
}

bool Orchestra::add_musician(Musician new_musician) {
    if(current_size < size_main){
        members[current_size] = new_musician;
        current_size++;
        return true;
    }
    else{
        return false;
    }
}

Orchestra::~Orchestra() {
    delete[] members;
}