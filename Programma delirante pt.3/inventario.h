#pragma once

typedef struct Articolo *articolo;
typedef struct Listino *listino;

// Convenzione! Tipi che iniziano con lettera maiuscola: tipo concreto. Tipi che iniziano con lettera minuscola: tipo puntato.

articolo InserisciArticolo(char nome[], char descrizione[], char marca[], float prezzo);
listino Inserimento(listino listino, char nome[], char descrizione[], char marca[], float prezzo);
