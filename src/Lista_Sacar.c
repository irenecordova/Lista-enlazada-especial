#include "miLista.h"

extern void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento)
{
	if ((lista != NULL) && (elemento != NULL) && (Lista_Vacia(lista) == 0)) 
	{
		ElementoLista *temp = Lista_Buscar(lista, elemento->objeto);
		
		if (temp != NULL)
		{
			if (elemento == Lista_Ultimo(lista))
			{
				elemento->anterior->siguiente = &(lista->ancla);
				lista->ancla.anterior = elemento->anterior;
			}
			else if (elemento == Lista_Primero(lista))
			{
				elemento->siguiente->anterior = &(lista->ancla);
				lista->ancla.siguiente = elemento->siguiente;
			}
			else
			{
				elemento->anterior->siguiente = elemento->siguiente;
				elemento->siguiente->anterior = elemento->anterior;
			}
			lista->numeroElementos--;
		}
	}
}
