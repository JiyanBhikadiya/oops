#include "Library.h"
#include "Book.h"

#include <string>
#include <iostream>

Library::Library(){
    capacity1 = 0;
    current_capacity = 0;
    books = new Book[capacity1];
}

Library::Library(int capacity){
    capacity1 = capacity;
    current_capacity = 0;
    books = new Book[capacity1];
}

int Library::get_current_number_of_books() {
    return current_capacity;
}

bool Library::has_book(std::string title) {
    for(int i=0;i<current_capacity;i++){
        if(books[i].get_title() == title){
            return true;
        }
    }

    return false;
}

Book* Library::get_books() {
    return books;
}

bool Library::add_book(Book new_book) {
    if(current_capacity < capacity1){
        books[current_capacity] = new_book;
        current_capacity++;
        return true;
    }
    else{
        return false;
    }
}

Library::~Library() {
    delete[] books;
}
