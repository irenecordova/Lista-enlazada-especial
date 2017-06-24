#include "miLista.h"

extern void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento)
{
	if ((lista != NULL) && (elemento != NULL) && (Lista_Vacia(lista) == 0)) 
	{
		ElementoLista *temp = Lista_Buscar(lista, elemento->objeto);
		
		if ((temp != NULL) && (temp != Lista_Ultimo(lista))
		{
			elemento->anterior->siguiente = &(elemento->siguiente);
			elemento->siguiente->anterior = &(elemento->anterior);
			elemento = NULL;
			lista->numeroELementos--;
		}
	}
}
