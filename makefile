

ccomp : src/main.c
	gcc src/main.c -I include -o ccomp
clean :
	rm ccomp
