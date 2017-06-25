#include <stdlib.h>
#include "miLista.h"

extern int Lista_InsertarFin(ListaEnlazada *lista, void *objeto)
{
	if (lista != NULL) 
	{
		//Se crea un puntero ElementoLista donde se guardará el objeto ingresado como parámetro y se reserva el espacio de memoria			
		ElementoLista *elemento = (ElementoLista *)malloc(sizeof(ElementoLista));

		//Se le asigna al nuevo elemento el objeto ingresado como parámetro
		elemento->objeto = objeto;
		
		if (Lista_Vacia(lista) == 1)
		{
			//Si la lista está vacía se mueven los punteros referenciando al ancla
			elemento->siguiente = elemento->anterior = &(lista->ancla);
			lista->ancla.siguiente = elemento;
		}
		else
		{
			//Si la lista no está vacía
			//Se obtiene el último de la lista
			ElementoLista *ultimo = Lista_Ultimo(lista);

			//Se mueven los punteros
			ultimo->siguiente = elemento;
			elemento->anterior = ultimo;
			elemento->siguiente = &(lista->ancla);
		}

		lista->ancla.anterior = elemento;

		//Incrementa el valor de número de elementos de la lista
		lista->numeroElementos++;
		return 1;
	}
	return -1;			
}
