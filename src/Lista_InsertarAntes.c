#include "miLista.h"

//Inserta un elemento antes del elemento ingresado como parámetro
extern int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento)
{
	if ((lista != NULL) && (elemento != NULL) && (Lista_Vacia(lista) == 0)) 
	{
		//Puntero temporaral ElementoLista para verificar si el elemento ingresado como parámetro existe
		ElementoLista *temp = Lista_Buscar(lista, elemento->objeto);
		
		//Si el elemento ingresado como parámetro es el primero, se usa la función Lista_InsertarInicio
		if (elemento == Lista_Primero(lista))
		{
			Lista_InsertarInicio(lista, objeto);
		}
		else if (temp != NULL)
		{
			//Se crea un puntero ElementoLista donde se guardará el objeto ingresado como parámetro y se reserva el espacio de memoria
			ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));

			//Se mueven  los punteros
			nuevo->objeto = objeto;
			nuevo->siguiente = elemento;
			nuevo->anterior = elemento->anterior;
			elemento->anterior->siguiente = nuevo;
			elemento->anterior = nuevo;
			lista->numeroElementos++;
			return 1;
		}
	}
	return -1;
}
