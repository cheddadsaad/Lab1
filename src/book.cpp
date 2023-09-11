
#include "Book.h"



// Fonction qui retourne le nombre lu.

int read_int()
{

    int p;
    
    std::cout<<"Entrez la valeur de p"<< std::endl;
    
    do{
        std::cin >> p;
        }while( (2 <= p) && (p<= 2000) );


    return p;
}

/**************************************************************/

// Fonction qui modifie son argument qui est passé par adresse.

void read_int(int *p)
{
    
    do{
        std::cin >>(*p);
        }while( (2 <= (*p)) && ((*p)<= 2000));
}

/**************************************************************/

// Fonction qui modifie son argument qui est passé par valeur.

void read_int(int p)
{
    
    do{
        std::cin >> p;
        }while((2<= p) && (p <=2000));
        
}

/**************************************************************/

// Fonction qui modifie son argument qui est passé par référence.

namespace MyNamespace{
    void read_int(int &p)
    {
    do{
        std::cin>>p;
        }while((2 <= p) && (p <=2000));
        }
}

/**************************************************************/

// Fonction qui retourne un livre dont le titre et nombre de pages (valide)sont lus au clavier.

Book read_Book()
{

    Book _book; 
    
    _book.nb_page = read_int();
    std::cout << "veuillez entrer le titre de votre livre" << std::endl;
    std::cout << "veuillez entrer le titre de votre livre" << std::endl;
    std::cin.getline(_book.title,50);
    
    return _book;
}

/**************************************************************/

// Fonction qui remplit le tableau par des fonctions lus au clavier. 

void return_tab(Book table[],int l)
{

    int i=0;

    for (i=0 ; i<l ; i++){
        table[i]=read_Book();
    }
}

/**************************************************************/

// Fonction qui affiche un livre donné en argument.

void affiche_book(Book _book)
{
    std::cout <<"Affichage du livre.........\n" << std::endl;
    std::cout << "Le livre contient "<<_book.nb_page<<" page\n"<< std::endl;
    std::cout <<"Il a comme titre: "<<_book.title<<"\n"<< std::endl;

}

/**************************************************************/

// Fonction qui affiche tous les livres d’un tableau (donné avec sa taille).

void affiche_tab(Book table[],int l)
{
    int i = 0;

    std::cout <<"Affichage des livres........\n" << std::endl;

    for (i=0 ; i<l ; i++){
        affiche_book(table[i]);
    }
}

/**************************************************************/

// Fonction prenant en arguments deux livres et qui échange leur nombre de pages.

void swapPageCount(Book &_book1,Book &_book2)
{
    int a;
    
    a = _book1.nb_page;
    _book1.nb_page = _book2.nb_page;
    _book2.nb_page = a;
}

/**************************************************************/

//Fonction qui retourne le livre le plus court.

Book& get_short(Book table[],int l)
{
    int i = 0;
    int k = 0;
    int min = table[0].nb_page;
    
    for (i=1 ; i<l ; i++){
        if(table[i].nb_page < min) {
            min = table[i].nb_page;
            k = i;
        }
    }
    
    return table[k];
}

/**************************************************************/

//Fonction qui retourne le livre le plus long.

Book& get_long(Book table[],int l)
{
    int i = 0;
    int k = 0;
    int max = table[0].nb_page;
    
    for (i=0 ; i<l ; i++){
        if(table[i].nb_page > max) {
            max = table[i].nb_page;
            k = i;
        }
    }
    
    return table[k];
}










