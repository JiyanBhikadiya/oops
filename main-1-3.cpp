#include "Book.h"

#include <string>
#include <iostream>

using namespace std;

int main(){
    Book b1;
    cout<<"Book-1"<<b1.get_title()<<",Author"<<b1.get_author()<<",Year"<<b1.get_year()<<endl;

    Book b2("Abc","Def",2005);
    cout<<"Book-1"<<b2.get_title()<<",Author"<<b2.get_author()<<",Year"<<b2.get_year()<<endl;
    return 0;
}