all: prueba

prueba: prueba.o objetos libmilista.so
	gcc -Llib/ obj/prueba.o obj/Lista*.o -lcifrado -o bin/prueba

prueba.o: src/pruebaLista.c
	gcc -Wall -Iinclude/ -c src/pruebaLista.c -o obj/prueba.o

objetos:
	gcc -Wall -Iinclude/ -c src/Lista*.c
	mv -f *.o obj/

libmilista.so: src/Lista*.c
	gcc -Wall -Iinclude/ -shared -fPIC src/Lista*.c -o lib/libmilista.so

.PHONY: clean
clean:
	rm -rf obj/* bin/* lib/*
