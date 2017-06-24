#include "miLista.h"

extern int Lista_Inicializar(ListaEnlazada *lista)
{
	ElementoLista *elemento= NULL
	*elemento = (ElementoLista *)malloc(sizeof(ElementoLista));

	if (lista != NULL)
	{
		elemento->objeto = NULL;
		elemento->siguiente = elemento;
		elemento->anterior = anterior;
		
		lista->numeroElementos = 0;
		lista->ancla = elemento;
	}
	return 1;
}
