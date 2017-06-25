#include "miLista.h"

extern int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento)
{
	if ((lista != NULL) && (elemento != NULL) && (Lista_Vacia(lista) == 0)) 
	{
		ElementoLista *temp = Lista_Buscar(lista, elemento->objeto);
		
		if (elemento == Lista_Primero(lista))
		{
			Lista_InsertarInicio(lista, objeto);
		}
		if ((temp != NULL) && (elemento != Lista_Ultimo(lista)))
		{
			ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));

			nuevo->objeto = objeto;
			nuevo->siguiente = elemento;
			nuevo->anterior = elemento->anterior;
			elemento->anterior = nuevo;
			elemento->anterior->siguiente = nuevo;
			lista->numeroElementos++;
			return 1;
		}
	}
	return -1;
}
