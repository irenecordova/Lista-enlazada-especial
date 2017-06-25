#include <stdlib.h>
#include "miLista.h"

//Verifica si la lista está vacía
extern int Lista_Vacia(ListaEnlazada *lista)
{
	if (lista != NULL)
	{
		//Retorna 1 si la lista está vacia y 0 si no está vacía
		if (lista->numeroElementos == 0) return 1;
		return 0;
	}
	return -1;
}
