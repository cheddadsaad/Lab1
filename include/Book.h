
#ifndef BOOK_H
#define BOOK_H


#include <iostream>

namespace MyNamespace{
    void read_int(int &p);
}


struct Book {
    char title[50];
	int nb_page ;
};


int read_int();
void read_int(int *p);
void read_int(int p);
Book read_Book();
void return_tab(Book table[],int l);
void affiche_book(Book _book);
void affiche_tab(Book table[],int l);
void swapPageCount(Book &_book1,Book &_book2);
Book& get_short(Book table[],int l);
Book& get_long(Book table[],int l);

#endif