#include "miLista.h"

extern ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento)
{
	if ((lista != NULL) && (Lista_Vacia(lista) == 0) && (elemento != NULL))
	{
		ElementoLista *temp = Lista_Buscar(lista, elemento->objeto);
		
		if ((temp != NULL) && (elemento != Lista_Ultimo(lista)) return (elemento->siguiente);
	}
	return NULL;
}


