#include "miLista.h"

extern int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto)
{
	if (lista != NULL) 
	{
		ElementoLista *elemento = (ElementoLista *)malloc(sizeof(ElementoLista));

		elemento->objeto = objeto;

		if (Lista_Vacia(lista) == 1)
		{
			elemento->siguiente = elemento->anterior = &(lista->ancla);
			lista->ancla.anterior = elemento;
		}
		else
		{
			ElementoLista *primero = Lista_Primero(lista);
			primero->anterior = elemento;
			elemento->siguiente = primero;
			elemento->anterior = &(lista->ancla);
		}
		lista->ancla.siguiente = elemento;
		lista->numeroElementos++;
		return 1;
	}
	return -1;			
}
