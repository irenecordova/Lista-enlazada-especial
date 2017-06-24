#include "miLista.h"

extern void Lista_SacarTodos(ListaEnlazada *lista)
{
	if ((lista != NULL) && (Lista_Vacia(lista) == 0)) 
	{
		lista->ancla->objeto = NULL;
		lista->ancla->siguiente = &(lista->ancla);
		lista->ancla->anterior = &(lista->ancla);
		lista->numeroElementos = 0;
	}
}
