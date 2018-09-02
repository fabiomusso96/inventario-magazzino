#include <stdlib.h>
#include "inventario.h"

typedef struct Articolo
{
	char *Nome, *Descrizione, *Marca;
	float Prezzo;
} Articolo;

typedef struct Listino
{
	articolo articolo;
	struct Listino *next;
} Listino;

// Convenzione! I tipi che iniziano con la lettera maiuscola sono i tipi concreti, quelli che iniziano con la minuscola, sono puntatori!

articolo InserisciArticolo(char nome[], char descrizione[], char marca[], float prezzo)
{
	articolo articolo = malloc(sizeof(Articolo));
	articolo->Nome = nome;
	articolo->Descrizione = descrizione;
	articolo->Marca = marca;
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
