#define _CRT_SECURE_NO_WARNINGS
#pragma once

#ifndef SIZE 
#define SIZE 100
#endif

typedef struct Articolo *Articolo;
typedef struct Listino *Listino;

Articolo *InserisciArticolo(char nome[], char descrizione[], char marca[], float prezzo);
Listino *Inserimento(Listino listino, char nome[], char descrizione, char marca, float prezzo);