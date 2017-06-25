#include <stdlib.h>
#include "miLista.h"

//Verifica si la lista está vacía
extern int Lista_Vacia(ListaEnlazada *lista)
{
	if (lista != NULL)
	{
		//Retorna 1 si la lista está vacia o 0 si la lista está llena
		if (lista->numeroElementos == 0) return 1;
		return 0;
	}
	return -1;
}
