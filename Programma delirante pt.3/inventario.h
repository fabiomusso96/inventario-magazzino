#pragma once

typedef struct Articolo *articolo;
typedef struct Listino *listino;

articolo InserisciArticolo(char nome[], char descrizione[], char marca[], float prezzo);
listino Inserimento(listino listino, char nome[], char descrizione[], char marca[], float prezzo);
