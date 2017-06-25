#include "miLista.h"

extern int Lista_InsertarFin(ListaEnlazada *lista, void *objeto)
{
	if (lista != NULL) 
	{
		ElementoLista *elemento = (ElementoLista *)malloc(sizeof(ElementoLista));
		elemento->objeto = objeto;

		if (Lista_Vacia(lista) == 1)
		{
			elemento->siguiente = elemento->anterior = lista->ancla;
			lista->ancla->siguiente = elemento;
		}
		else
		{
			ElementoLista *ultimo = Lista_Ultimo(lista);
			ultimo->siguiente = elemento;
			elemento->anterior = ultimo;
			elemento->siguiente = lista->ancla;
		}

		lista->ancla->anterior = elemento;
		lista->numeroElementos++;
		return 1;
	}
	return -1;			
}
