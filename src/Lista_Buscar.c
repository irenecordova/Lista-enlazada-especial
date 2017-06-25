#include "miLista.h"

//Busca si el elemento pertenece a lista
extern ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto)
{
	if ((lista != NULL) && (Lista_Vacia(lista) == 0))
	{
		//Se crean dos punteros elementos lista, uno será el primero y otro el último de la lista
		ElementoLista *elemento = Lista_Primero(lista);
		ElementoLista *ultimo = Lista_Ultimo(lista);

		//Se realiza el ciclo mientras el primero no sea último
		while (elemento != ultimo)
		{
			//Retorna la dirección de memoria del primero si los objetos son iguales
			if (elemento->objeto == objeto) return elemento;
			
			//Se mueve el puntero al siguiente
			elemento = elemento->siguiente;
		}

		//Retorna la dirección de memoria del último si los objetos son iguales
		if (elemento->objeto == ultimo->objeto) return ultimo;
	}
	return NULL;
}
