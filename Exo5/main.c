// TP4  ************ EXO 5 **************************


#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#define MAXPHRASE 1024



int main() {

	char phrase[MAXPHRASE];
	printf("ecriver votre phrase: ");
	gets_s(phrase, (unsigned)_countof(phrase)); //on demande la phrase à l'utilisateur
	
	int i = 0;
	int mot_compt = 0; // initialisation compteur de mot
	int nb_lettre = 0;	// initialisation  compteur de lettre

	while (phrase[i] != '\0') { // on parcourt la phrase
		if ((phrase[i] == ' ') || (phrase[i] == '.') || (phrase[i] == ',') || (phrase[i] == '!') || (phrase[i] == '?') || (phrase[i] == ':')){ //si on trouve un �l�ments de fin de mot
				mot_compt++; // on rajoute 1 mot 
		}
		else {
			nb_lettre++; // sinon on rajoute une lettre car c'est pas un autre élément
		}
		i++;	// on continue à parcourir la phrase
		
	}
	mot_compt++; 


	if (phrase[0] == '\0') { // on regarde si l'utilisateur à entré une phrase ou non
		printf("il n'y a pas de phrase");
	}
	else {
		printf("votre phrase contient %d mots et leur moyenne est de %.1f caractere", mot_compt, (float)nb_lettre / mot_compt);
	}
	


	return(EXIT_SUCCESS);
}