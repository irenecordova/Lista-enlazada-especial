#include <stdlib.h>
#include "miLista.h"

//Saca un elemento de lista
extern void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento)
{
	if ((lista != NULL) && (elemento != NULL) && (Lista_Vacia(lista) == 0)) 
	{
		//Puntero temporal ElementoLista para verificar si el elemento ingresado como parámetro existe		
		ElementoLista *temp = Lista_Buscar(lista, elemento->objeto);
		
		if (temp != NULL)
		{
			//Se usa la función Lista_Ultimo para verificar si el elemento ingresado como parámetro es el último de la lista
			if (elemento == Lista_Ultimo(lista))
			{
				//Se mueven los punteros
				elemento->anterior->siguiente = &(lista->ancla);
				lista->ancla.anterior = elemento->anterior;
			}
			//Se usa la función Lista_Primero para verificar si el elemento ingresado como parámetro es el primero de la lista
			else if (elemento == Lista_Primero(lista))
			{
				//Se mueven los punteros
				elemento->siguiente->anterior = &(lista->ancla);
				lista->ancla.siguiente = elemento->siguiente;
			}
			else
			{
				//Se mueven los punteros
				elemento->anterior->siguiente = elemento->siguiente;
				elemento->siguiente->anterior = elemento->anterior;
			}
			
			//Decrementa el valor de número de elementos de la lista
			lista->numeroElementos--;
		}
	}
}
