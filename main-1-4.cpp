#include "Book.h"
#include "Library.h"

#include <string>
#include <iostream>

int main(){
    Library library(3);

    Book b1("A","a",1);
    Book b2("B","b",2);
    Book b3("C","c",3);
    Book b4("D","d",4);

    if(library.add_book(b1)){
        cout<<"Book 1 added"<<endl;
    }
    else{
        cout<<"Book 1 not added"<<endl;
    }
    if(library.add_book(b2)){
        cout<<"Book 2 added"<<endl;
    }
    else{
        cout<<"Book 2 not added"<<endl;
    }
    if(library.add_book(b3)){
        cout<<"Book 3 added"<<endl;
    }
    else{
        cout<<"Book 3 not added"<<endl;
    }
    if(library.add_book(b4)){
        cout<<"Book 4 added"<<endl;
    }
    else{
        cout<<"Book 4 not added"<<endl;
    }

    cout<<"Total books:- "<<library.get_current_number_of_books()<<endl;

    if(library.has_book("D")){
        cout<<"D present"<<endl;
    }
    else{
        cout<<"D absent"<<endl;
    }

    Book* Book = library.get_books();

    for(int i=0;i<library.get_current_number_of_books();i++){
        cout<<"Book-"<<i+1<<Book[i].get_title()<<"Author = "<<Book[i].get_author()<<"Year = "<<Book[i].get_year()<<endl;
    }    
    return 0;
}