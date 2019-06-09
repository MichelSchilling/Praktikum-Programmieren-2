#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int umrechnung(int dzahl);
void ausgabe(int erg);
int eingabe();

int main()
{
	int dzahl;
	double erg;

	printf("Programm zur Umwandlung Dezimal in Hex ");

	dzahl = eingabe();

	erg = umrechnung(dzahl);

	ausgabe(erg);


	system("PAUSE");
	return 0;

}


int eingabe()
{
	int dzahl;

	do {

		printf("\nBitte Geben Sie eine Zahl zwischen 0 und 65534 ein : ");
		scanf("%d", &dzahl);

		if (dzahl <= 0 || dzahl > 65534)
		{
			printf("\nDie Zahl leigt nicht im vorgegebenen Intervall!\n");
		}
	} while (dzahl <= 0 || dzahl > 65534);

	return dzahl;

}

int umrechnung(int dzahl)
{
	double erg, rest;

		rest = dzahl % 16;
		dzahl = dzahl / 16;
		erg = rest;



		if (erg == 15)
			printf("F\n\n");
		else if (erg == 14)
			printf("E\n\n");
		else if (erg == 13)
			printf("D\n\n");
		else if (erg == 12)
			printf("C\n\n");
		else if (erg == 11)
			printf("B\n\n");
		else if (erg == 10)
			printf("A\n\n");
		else
			printf("%i\n\n", erg);

		if (rest != 0)
		{
			umrechnung(dzahl);
		}





	return erg;
}

void ausgabe(int erg)
{



	printf(" \nDie Hex Zahl fuer die Dezimalzahl ist : %d \n\n", erg);

}
