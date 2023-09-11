#include "Book.h"



int main ( int , char *[])
{
    

    Book books [4] = {
            { " The Art of Computer Programming " , 256} ,
            { " Tom Sawyer " , 128},{"Harry Poter",300},{"Antigone",350}
        };
    
    /*
    //Question 2.4.3

     swapPageCount(get_long(books,4),get_short(books,4));
     affiche_tab(books,4);
    */
    
    Book &short1 = get_short(books,4),&long1 = get_long(books,4);

    
     swapPageCount(long1, short1);
     affiche_tab(books,4);
    
    
    
    /*
    // Question 2.2.1
    int a = 5;
    int &p = a;
    int q;

    MyNamespace::read_int(p);
    read_int(q);
    */
    
    /*
    //Question 3
    // Pour vérifier que l’instruction ci-dessous provoque une erreur de compilation.
    swapPageCount( read_Book(), read_Book() );
    */
    
    return 0;

}