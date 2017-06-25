#include "miLista.h"

//Retorna el número de elementos de la lista
extern int Lista_Conteo(ListaEnlazada *lista)
{
	//Retorna el valor de numeroElementos de la lista
	if (lista != NULL) return (lista->numeroElementos);
	return -1;
}

