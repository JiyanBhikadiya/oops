#ifndef CAGE_H
#define CAGE_H

#include <string>
#include <iostream>

using namespace std;

class Cage{
    private:
        string name;
        int id;

    public:
        Cage();
        Cage(std::string newName,int newNumber);
        std::string getName();
        int getIDnum();
        ~Cage();
};

#endif