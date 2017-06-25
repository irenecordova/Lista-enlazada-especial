#include "miLista.h"

extern ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto)
{
	if ((lista != NULL) && (Lista_Vacia(lista) == 0))
	{
		ElementoLista *elemento = Lista_Primero(lista);
		ElementoLista *ultimo = Lista_Ultimo(lista);

		while (elemento != ultimo)
		{
			if (elemento->objeto == objeto) return elemento;
			elemento = elemento->siguiente;
		}
		if (elemento->objeto == ultimo->objeto) return ultimo;
	}
	return NULL;
}
