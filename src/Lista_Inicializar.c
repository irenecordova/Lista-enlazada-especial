#include <stdlib.h>
#include "miLista.h"

//Inicializa la lista
extern int Lista_Inicializar(ListaEnlazada *lista)
{
	if (lista != NULL)
	{
		//Crea un puntero ElementoLista y se reserva el espacio de memoria
		ElementoLista *elemento = (ElementoLista *)malloc(sizeof(ElementoLista));
	
		//Se establece la dirección de los punteros del ElementoLista
		elemento->objeto = NULL;
		elemento->siguiente = elemento;
		elemento->anterior = elemento;
		
		//Se establece el número de elementos y el valor del ancla
		lista->numeroElementos = 0;
		lista->ancla = *elemento;
		return 1;
	}
	return -1;
}
