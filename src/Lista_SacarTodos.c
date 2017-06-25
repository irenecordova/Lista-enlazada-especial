#include <stdlib.h>
#include "miLista.h"

//Saca todos los elementos de la lista
extern void Lista_SacarTodos(ListaEnlazada *lista)
{
	if ((lista != NULL) && (Lista_Vacia(lista) == 0)) 
	{
		//Se mueven los punteros haciendo referencia al ancla
		lista->ancla.objeto = NULL;
		lista->ancla.siguiente = &(lista->ancla);
		lista->ancla.anterior = &(lista->ancla);
			
		//Se reduce el número de elementos de la lista a 0
		lista->numeroElementos = 0;
	}
}
