#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include "inventario.h"

#ifndef SIZE 
#define SIZE 100
#endif

typedef struct Articolo
{
	char *Nome, *Descrizione, *Marca;
	float Prezzo;
}*Articolo;

typedef struct Listino
{
	Articolo lista;
	struct Listino *next;
}*Listino;

Articolo *InserisciArticolo(char nome[], char descrizione[], char marca[], float prezzo)
{
	Articolo articolo = malloc(sizeof(Articolo));
	articolo->Nome = nome;
	articolo->Descrizione = descrizione;
	articolo->Marca = marca;
	articolo->Prezzo = prezzo;

	return articolo;
}

Listino *Inserimento(Listino listino, char nome[], char descrizione, char marca, float prezzo)
{
	if (listino == NULL)
	{
		listino = malloc(sizeof(Listino));
		listino->next = NULL;
		listino->lista = InserisciArticolo(nome, descrizione, marca, prezzo);
		return listino;
	}

	listino = Inserimento(listino->next, nome, descrizione, marca, prezzo);
	return listino;
}
