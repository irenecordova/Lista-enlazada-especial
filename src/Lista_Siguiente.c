#include <stdlib.h>
#include "miLista.h"


//Retorna el elemento siguiente al elemento ingresado como parámetro
extern ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento)
{
	if ((lista != NULL) && (Lista_Vacia(lista) == 0) && (elemento != NULL))
	{
		//Puntero temporaral ElementoLista para verificar si el elemento ingresado como parámetro existe
		ElementoLista *temp = Lista_Buscar(lista, elemento->objeto);

		//Se verifica que el elemento existe y que no sea el último ya que no tiene siguiente. Retorna el siguiente
		if ((temp != NULL) && (elemento != Lista_Ultimo(lista))) return (elemento->siguiente);
	}
	return NULL;
}


