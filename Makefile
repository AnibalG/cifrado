INCLUDE=-Iinclude/
LIBS=-Llib/

cifrador: main.o cifrado.o codificacion.o libcif.so
	gcc $(LIBS) obj/main.o obj/cifrado.o obj/codificacion.o  -o bin/$@

libcif.so: main.o cifrado.o codificacion.o
	gcc -shared  obj/main.o obj/cifrado.o obj/codificacion.o -o lib/libcif.so

main.o: src/main.c
	gcc -fPIC -Wall -c $(INCLUDE) src/main.c -o obj/main.o

cifrado.o: src/cifrado.c
	gcc -fPIC -Wall -c $(INCLUDE) src/cifrado.c -o obj/cifrado.o

codificacion.o: src/codificacion.c
	gcc -fPIC -Wall -c $(INCLUDE) src/codificacion.c -o obj/codificacion.o

.PHONY: clean
clean:
	rm -rf obj/* bin/* lib/*
