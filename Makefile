%: %.o	
	gcc -o argtest argtest.o

%.o: %.c
	gcc -c argtest.c

