all: printWithoutColon.c
	gcc -o main printWithoutColon.c

clean:
	rm -f main
