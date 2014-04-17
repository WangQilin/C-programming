all: printWithoutColon.c HolyShit.c
	gcc -o printWithoutColon printWithoutColon.c
	gcc -o shit HolyShit.c

clean:
	rm -f printWithoutColon shit
