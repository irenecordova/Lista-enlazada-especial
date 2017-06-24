#include "miLista.h"

extern int Lista_Conteo(ListaEnlazada *lista)
{
	if (lista != NULL) return lista->numeroElementos;
	return -1;
}
