all: main.o mystring.o
	gcc -o mystring main.o mystring.o
main.o: mystring.h main.c
	gcc -c main.c
mystring.o: mystring.h mystring.c
	gcc -c mystring.c
run:
	./mystring