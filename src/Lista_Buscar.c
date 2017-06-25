#include "miLista.h"

extern ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto)
{
	if ((lista != NULL) && (Lista_Vacia(lista) == 0))
	{
		ElementoLista *elemento = Lista_Primero(lista);
		ElementoLista *ancla = elemento->anterior;
		
		while (elemento != lista->ancla)
		{
			if (elemento->objeto == objeto) return elemento;
			elemento = elemento->siguiente;
		}
	}
	return NULL;
}
