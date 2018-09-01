#define _CRT_SECURE_NO_WARNINGS

#ifndef SIZE 
#define SIZE 100
#endif

typedef struct Articolo *articolo;
typedef struct Listino *listino;

listino InserisciArticolo(listino Listino, int ID);
void Inserimento(listino Listino);