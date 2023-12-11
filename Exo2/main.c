// TP4  ************ EXO 2 **************************
#include <stdlib.h>
#include <stdio.h>

#define SEPARATEUR "/"
#define TAILLETAB1 20

int main() {
	int MyTab1[TAILLETAB1]; // on initialise le tableau à 20
	int * MyPtr;

	for (int i = 0;i < TAILLETAB1;i++) { // on parcourt le tableau
		*(MyTab1 + i) = i+1; // on ajoute à la case en question le nombre qui lui correspond
		printf("%d %c ", *(MyTab1 + i), SEPARATEUR); //on affiche la valeur à partir du tableau avec son separateur
	}

	MyPtr = MyTab1 + (TAILLETAB1 - 1); // on attribue à notre pointeur l'adresse du dernier élément du tableau
	printf("\n");

	for (int i = 0;i < TAILLETAB1;i++) { // on parcourt le tableau 
		printf("%d %c ",*MyPtr, SEPARATEUR); // on affiche la valeur pointé par le pointeur
		MyPtr--; // on recule d'une case dans le tableau en retirant un à son adresse 
	}

	return(EXIT_SUCCESS);
}