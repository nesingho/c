/* Test print arguments */

#include<stdio.h>
#include<string.h>
#include<time.h>

int main(int argc, char *argv[]) {

	int i = 1;
	int argi = 0;
	char string[] = "help";

	if ( argc < 2 ) {
		printf("Too few arguments.\n");
		}
	
	else { 	if ( argc > 2 ) {
			printf("%s and %s are too many arguments, only 1 is implemented yet.\n", argv[1], argv[2]);
		}
		else { if ( strcmp(argv[1], string) == 0) {
			printf("Argument %s ist korrekt.\n", argv[1]);
			}
			else {
				printf("Argument %s isn't implemented yet, must be help.\n", argv[1]);
			}
		}	
	}

	argi = argc - 1;

/* time */

	/* get current time */
	time_t currentTime;
	char* timeString;

	currentTime = time(NULL);

	timeString = ctime(&currentTime); /* convert time string to local format */
	strtok(timeString, "\n"); /* cut line break from string */

/* end time  */

	printf("[Debug %s] Arguments were ", timeString);
	for ( i=1; i<argi; i++) {
		printf("%s, ", argv[i]);
	}
	printf("%s.\n", argv[argi]);
	return(0);
}

