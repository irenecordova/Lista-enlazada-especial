#include <stdlib.h>
#include "miLista.h"

extern int Lista_InsertarDespues(ListaEnlazada *lista, void *objeto, ElementoLista *elemento)
{
	if ((lista != NULL) && (elemento != NULL) && (Lista_Vacia(lista) == 0)) 
	{
		ElementoLista *temp = Lista_Buscar(lista, elemento->objeto);
		
		if (elemento == Lista_Ultimo(lista))
		{
			Lista_InsertarFin(lista, objeto);
		}
		else if (temp != NULL)
		{
			ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));

			nuevo->objeto = objeto;
			nuevo->anterior = elemento;
			nuevo->siguiente = elemento->siguiente;
			elemento->siguiente->anterior = nuevo;
			elemento->siguiente = nuevo;
			lista->numeroElementos++;
			return 1;
		}
	}
	return -1;
}
