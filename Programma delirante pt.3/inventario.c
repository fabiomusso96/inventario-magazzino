#include <stdlib.h>
#include "inventario.h"

typedef struct Articolo
{
	char *nome, *descrizione, *marca;
	float Prezzo;
} Articolo;

typedef struct Listino
{
	articolo articolo;
	struct Listino *next;
} Listino;

articolo InserisciArticolo(char nome[], char descrizione[], char marca[], float prezzo)
{
	articolo articolo = malloc(sizeof(Articolo));
	articolo->nome = nome;
	articolo->descrizione = descrizione;
	articolo->marca = marca;
	articolo->Prezzo = prezzo;

	return articolo;
}

listino Inserimento(listino listino, char nome[], char descrizione[], char marca[], float prezzo)
{
	if (listino == NULL)
	{
		listino = malloc(sizeof(Listino));
		listino->next = NULL;
		listino->articolo = InserisciArticolo(nome, descrizione, marca, prezzo);
		return listino;
	}

	listino = Inserimento(listino->next, nome, descrizione, marca, prezzo);
	return listino;
}
