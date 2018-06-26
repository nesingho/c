#include <stdio.h>

void changeInt(int *parameter) {

	printf("\n changeInt: *Parameter hat den Wert: %d", *parameter);
	printf("\n changeInt: Parameter hat den Wert: %p", parameter);

	int *AdressSpeicher = parameter;
	int WertSpeicher = *parameter;
	printf("\n changeInt: AdressSpeicher hat nun den Wert: %p",AdressSpeicher);
	printf("\n changeInt: WertSpeicher hat nun den Wert: %d",WertSpeicher);

	*parameter = 32;
	printf("\n changeInt: ... Parameter hat neuen Wert erhalten ...");

	printf("\n changeInt: Adresse von Parameter: %p", parameter);
	if(parameter == AdressSpeicher){
		printf("\n changeInt: ... AdressSpeicher und Parameter stimmen überein ...");
	}

	printf("\n changeInt: *Parameter hat nun den Wert: %d\n", *parameter);

}

/*
 	void changeString(char *parameter) {

	printf("\n changeString: Parameter hat den Wert: %s", parameter);
	printf("\n changeString: Neue Zeichenkette eingeben: ");
	scanf("%[^\n]", parameter); // scanf("%[^\n]")... zum erkennen der Leerzeichen, sonst scanf("%s")...
	printf("\n changeString: Parameter hat den Wert: %s", parameter);
	printf("\n changeString: &Parameter hat den Wert: %d", &parameter);
	int* ZeigerString = &parameter;
	printf("\n%d\n", ZeigerString);

} 
*/

int main(int argc, char **argv) {

/*	
 	int i;
	for(i=1; i<argc; i++) {
		printf("Main: Parameter %d: %s", i, argv[i]);
	}
*/
	int zahl = 10;
	printf("\nMain: Zahl hat den Wert: %d\n", zahl);
	printf("Main: Adresse von Zahl: %p\n", &zahl);
	changeInt(&zahl);
	printf("\nMain: Zahl hat nun den Wert: %d", zahl);
	printf("\nMain: Adresse von Zahl: %p\n", &zahl);

/* 	
	char zeichenkette[40]="Ich bin Zeichenkette";
	printf("\nMain: Zeichenkette hat den Wert: %s\n", zeichenkette);
	changeString(zeichenkette);
	printf("\nMain: Zeichenkette hat den Wert: %s", zeichenkette);
*/

	printf("\n");

	return 0;

}
