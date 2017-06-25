#include <stdlib.h>
#include "miLista.h"

//Retorna el primer elemento de la lista
extern ElementoLista *Lista_Primero(ListaEnlazada *lista)
{
	if ((lista != NULL) && (Lista_Vacia(lista) == 0))
	{
		//Si la lista no está vacia, retorna el siguiente del ancla		
		return (lista->ancla.siguiente);
	}
	return NULL;
}
