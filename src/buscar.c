#include "miLista.h"

extern ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto)
{
	if ((lista != NULL) && (Lista_Vacia(lista) == 0))
	{
		ElementoLista *primero = Lista_Primero(lista);
		ElementoLista *ancla = primero->anterior;
		
		while (primero != ancla)
		{
			if (primero->objeto == objeto) return primero;
			primero = primero->siguiente;
		}
	}
	return NULL;
}
