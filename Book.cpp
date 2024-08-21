#include "Book.h"

#include <string>
#include <iostream>

using namespace std;

Book::Book() {
    title1 = "null";
    author1 = "null";
    year1 = 0;
}

Book::Book(std::string title, std::string author, int year) {
    title1 = title;
    author1 = author;
    year1 = year;
}

std::string Book::get_title() {
    return title1;
}

std::string Book::get_author() {
    return author1;
}

int Book::get_year() {
    return year1;
}