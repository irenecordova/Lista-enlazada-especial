all: prueba

prueba: prueba.o objetos libmilista.so
	gcc -Llib/ obj/prueba.o obj/Lista*.o -lmilista -o bin/prueba
	gcc -Llib/ obj/prueba2.o obj/Lista*.o -lmilista -o bin/prueba2

prueba.o: src/pruebaLista.c
	gcc -Wall -Iinclude/ -c src/pruebaLista.c -o obj/prueba.o
	gcc -Wall -Iinclude/ -c src/prueba2.c -o obj/prueba2.o

objetos:
	gcc -Wall -Iinclude/ -c src/Lista*.c
	mv -f *.o obj/

libmilista.so: src/Lista*.c
	gcc -Wall -Iinclude/ -shared -fPIC src/Lista*.c -o lib/libmilista.so

.PHONY: clean
clean:
	rm -rf obj/* bin/* lib/*
