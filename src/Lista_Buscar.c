#include <stdlib.h>
#include "miLista.h"

//Busca si el elemento pertenece a lista
extern ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto)
{
	if ((lista != NULL) && (Lista_Vacia(lista) == 0))
	{
		//Se crean dos punteros elementos lista, uno será el primero y otro el último de la lista
		ElementoLista *elemento = Lista_Primero(lista);
		ElementoLista *ultimo = Lista_Ultimo(lista);

		//Se realiza el ciclo mientras el elemento no sea último
		while (elemento != ultimo)
		{
			//Retorna el elemento si los objetos son iguales
			if (elemento->objeto == objeto) return elemento;
			
			//Se mueve el puntero al siguiente
			elemento = elemento->siguiente;
		}

		//Retorna el último si los objetos son iguales, ya que si el elemento es el último no entra al while.
		if (elemento->objeto == ultimo->objeto) return ultimo;
	}
	return NULL;
}
