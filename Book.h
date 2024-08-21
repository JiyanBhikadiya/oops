#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

using namespace std;

class Book{
    private:
        string title1,author1;
        int year1;

    public:
        Book();
        Book(std::string title, std::string author, int year);
        std::string get_title();
        std::string get_author();
        int get_year();
};

#endif