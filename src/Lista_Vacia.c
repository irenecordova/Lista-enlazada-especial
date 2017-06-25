#include <stdlib.h>
#include "miLista.h"

extern int Lista_Vacia(ListaEnlazada *lista)
{
	if (lista != NULL)
	{
		if (lista->numeroElementos == 0) return 1;
		return 0;
	}
	return -1;
}
