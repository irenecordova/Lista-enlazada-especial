#include <stdlib.h>
#include "miLista.h"

//Retorna el elemento anterior al elemento ingresado como parámetro y lo retorna
extern ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento)
{
	if ((lista != NULL) && (Lista_Vacia(lista) == 0) && (elemento != NULL))
	{
		//Puntero temporaral ElementoLista para verificar si el elemento ingresado como parámetro existe
		ElementoLista *temp = Lista_Buscar(lista, elemento->objeto);

		//Se verifica que el elemento existe y que no sea el primero ya que no tiene anterior. Retorna el anterior
		if ((temp != NULL) && (elemento != Lista_Primero(lista))) return (elemento->anterior);
	}
	return NULL;
}
