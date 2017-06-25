all: prueba

prueba: prueba.o objetos libmilista.so
	gcc -Wall -Llib/ obj/prueba.o obj/Lista*.o -lmilista -o ./prueba

prueba.o: src/pruebaLista.c
	gcc -Wall -Iinclude/ -c src/pruebaLista.c -o obj/prueba.o

objetos:
	gcc -Wall -Iinclude/ -c src/Lista_Anterior.c -o obj/Lista_Anterior.o
	gcc -Wall -Iinclude/ -c src/Lista_Buscar.c -o obj/Lista_Buscar.o
	gcc -Wall -Iinclude/ -c src/Lista_Conteo.c -o obj/Lista_Conteo.o
	gcc -Wall -Iinclude/ -c src/Lista_Inicializar.c -o obj/Lista_Inicializar.o
	gcc -Wall -Iinclude/ -c src/Lista_InsertarAntes.c -o obj/Lista_InsertarAntes.o
	gcc -Wall -Iinclude/ -c src/Lista_InsertarDespues.c -o obj/Lista_InsertarDespues.o
	gcc -Wall -Iinclude/ -c src/Lista_InsertarFin.c -o obj/Lista_InsertarFin.o
	gcc -Wall -Iinclude/ -c src/Lista_InsertarInicio.c -o obj/Lista_InsertarInicio.o
	gcc -Wall -Iinclude/ -c src/Lista_Primero.c -o obj/Lista_Primero.o
	gcc -Wall -Iinclude/ -c src/Lista_Sacar.c -o obj/Lista_Sacar.o
	gcc -Wall -Iinclude/ -c src/Lista_Siguiente.c -o obj/Lista_Siguiente.o
	gcc -Wall -Iinclude/ -c src/Lista_SacarTodos.c -o obj/Lista_SacarTodos.o
	gcc -Wall -Iinclude/ -c src/Lista_Ultimo.c -o obj/Lista_Ultimo.o
	gcc -Wall -Iinclude/ -c src/Lista_Vacia.c -o obj/Lista_Vacia.o

libmilista.so: src/Lista*.c
	gcc -Wall -Iinclude/ -shared -fPIC src/Lista*.c -o lib/libmilista.so

.PHONY: clean
clean:
	rm -rf obj/* lib/*
