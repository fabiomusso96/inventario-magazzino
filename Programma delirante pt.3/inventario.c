#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inventario.h"

#ifndef SIZE 
#define SIZE 100
#endif

typedef struct Articolo
{
	char Nome[SIZE], Descrizione[SIZE], Marca[SIZE], Prezzo[SIZE];
	int ID;
	struct Articolo *next;
}*articolo;

typedef struct Listino
{
	articolo lista;
	int PrezzoListino;
	char NomeNegozio[SIZE];
	struct Listino *next;
}*listino;

listino InserisciArticolo(listino Listino, int ID)
{
	Listino = (listino)malloc(sizeof(listino));
	Listino->lista = (articolo)malloc(sizeof(articolo));
	Listino->next = NULL;
	Listino->lista->next = NULL;
	Listino->lista->ID = ID;
	rewind(stdin);

	printf("Inserisci nome: ");
	gets_s(Listino->lista->Nome, SIZE);
	printf("Inserisci Descrizione: ");
	gets_s(Listino->lista->Descrizione, SIZE);
	printf("Inserisci marca: ");
	gets_s(Listino->lista->Marca, SIZE);
	printf("Inserisci prezzo: ");
	gets_s(Listino->lista->Prezzo, SIZE);
	printf("Inserisci nome negozio: ");
	gets_s(Listino->NomeNegozio, SIZE);

	Inserimento(Listino);

	printf("L'inserimento e' stato completato!\n"
			"L'articolo %s %s e' stato inserito nel listino al prezzo di %d presso il negozio %s.\n\n", &Listino->lista->Marca, &Listino->lista->Nome, &Listino->PrezzoListino, &Listino->NomeNegozio);

	return Listino;
}

void Inserimento(listino Listino)
{
	listino nodo = NULL;
	if (nodo == NULL)
	{
		nodo = Listino;
		nodo->next = NULL;
		nodo->lista->Prezzo[nodo->PrezzoListino];
		nodo->PrezzoListino[nodo->NomeNegozio];
		return;
	}
	Inserimento(Listino->next);
	return;
}

