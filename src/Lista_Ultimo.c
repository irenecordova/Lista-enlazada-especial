#include <stdlib.h>
#include "miLista.h"

//Retorna el último elemento de la lista
extern ElementoLista *Lista_Ultimo(ListaEnlazada *lista)
{
	if ((lista != NULL) && (Lista_Vacia(lista) == 0))
	{
		//Si la lista no está vacia, retorna el anterior del ancla
		return (lista->ancla.anterior);
	}
	return NULL;
}
