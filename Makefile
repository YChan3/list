all:	test.o list.o
	gcc -o out test.o list.o

list.o: list.c
	gcc -c list.c

testing.o: test.c list.h
	gcc -c test.c

run:
	./out

clean:
	rm out
	rm *.o
