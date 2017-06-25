#include "miLista.h"

extern ElementoLista *Lista_Primero(ListaEnlazada *lista)
{
	if ((lista != NULL) && (Lista_Vacia(lista) == 0))
	{
		return (lista->ancla.siguiente);
	}
	return NULL;
}
