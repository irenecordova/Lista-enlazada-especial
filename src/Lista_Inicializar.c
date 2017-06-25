#include "miLista.h"

extern int Lista_Inicializar(ListaEnlazada *lista)
{
	if (lista != NULL)
	{
		ElementoLista *elemento = (ElementoLista *)malloc(sizeof(ElementoLista));

		elemento->objeto = NULL;
		elemento->siguiente = elemento;
		elemento->anterior = elemento;
		
		lista->numeroElementos = 0;
		lista->ancla = *elemento;
		return 1;
	}
	return -1;
}
