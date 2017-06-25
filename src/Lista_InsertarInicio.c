#include <stdlib.h>
#include "miLista.h"

extern int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto)
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
			lista->ancla.anterior = elemento;
		}
		else
		{
			//Si la lista no está vacía
			//Se obtiene el primeto de la lista
			ElementoLista *primero = Lista_Primero(lista);

			//Se mueven los punteros
			primero->anterior = elemento;
			elemento->siguiente = primero;
			elemento->anterior = &(lista->ancla);
		}
		lista->ancla.siguiente = elemento;

		//Incrementa el valor de número de elementos de la lista
		lista->numeroElementos++;
		return 1;
	}
	return -1;			
}
