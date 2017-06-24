#include "miLista.h"

extern ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento)
{
	if ((lista != NULL) && (Lista_Vacia(lista) == 0) && (elemento != NULL))
	{
		ElementoLista *temp = Lista_Buscar(lista, elemento->objeto);
		
		if ((temp != NULL) && (elemento != Lista_Primero(lista)) return (elemento->anterior);
	}
	return NULL;
}
