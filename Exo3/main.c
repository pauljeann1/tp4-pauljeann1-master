// TP4  ************ EXO 3 **************************


#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/********************** EXO 3 *****************************/

#define MAXNOM 20
#define MAXPRENOM 20



int main() {

	char nom[MAXNOM];
	char prenom[MAXPRENOM];
	char sexe;




	printf("\nEntrer le sexe : ");
	do {
		sexe = (char)_getch();
	} while ((sexe != 'F') && (sexe!='H'));

	//on recupere les infos et on les stockes dans leurs variables
	printf("\nEntrer le nom : ");
	scanf_s("%s", &nom, (unsigned)_countof(nom));
	printf("\nEntrer le prenom : ");
	scanf_s("%s", &prenom, (unsigned)_countof(prenom));
	
	if (sexe == 'F') {  // on regarde si l'individu est un homme ou une femme et en fontion on print madame ou monsieur
		printf("\nMadame %s %s", nom, prenom);
	}
	else {
		printf("\nMonsieur %s %s", nom, prenom);
	}
	
	



	return(EXIT_SUCCESS);
}