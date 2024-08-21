#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"

#include <string>
#include <iostream>

class Library{
    private:
        int capacity1,current_capacity;
        Book* books;

    public:
        Library();  // Initializes with a default capacity of 0.
        Library(int capacity);  // Initializes with a given maximum capacity.
        int get_current_number_of_books();  // Returns the current number of books in the library.
        bool has_book(std::string title);  // Returns true if a book with the specified title is in the library.
        Book* get_books();  // Returns the array of books currently in the library.
        bool add_book(Book new_book);  // Adds a book to the library if it is not full.
        ~Library();  // Cleans up dynamically allocated memory.
};

#endif