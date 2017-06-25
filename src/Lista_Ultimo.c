#include "miLista.h"

extern ElementoLista *Lista_Ultimo(ListaEnlazada *lista)
{
	if ((lista != NULL) && (Lista_Vacia(lista) == 0))
	{
		return (lista->ancla.anterior);
	}
	return NULL;
}
