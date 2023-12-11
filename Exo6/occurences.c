// TP4  ************ EXO 6 **************************


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

#define TAILLE 100


// Ecrire un programme qui recherche et affiche toutes les positions d�une valeur donn�e dans un
// tableau de 100 entiers compris entre 0 et 20. Le tableau est initialis� avec des nombres al�atoires.Le
// programme indique s�il n�a pas trouv� la valeur.
// L�affichage se fait comme suit :
// Entrer la valeur recherch�e : 12
// La valeur 12 a �t� trouv�e en 0 puis en 5, puis en 37.
// Contrainte : La recherche se fait � l�aide d�une variable nomm�e Curseur de type pointeur d�entier et
// qui doit :
//  � �tre correctement d�clar�e
//  � �tre initialis�e avec l�adresse du premier �l�ment du tableau
//  � parcourir toutes les positions du tableau afin de comparer l��l�ment point� avec la valeur
//    recherch�e.


int rangedRand(int range_min, int range_max)
{
	// Generate random numbers in the half-closed interval
	// [range_min, range_max). In other words,
	// range_min <= random number < range_max

	int u = (int)((double)rand() / ((double)RAND_MAX + 1) * ((double)range_max - (double)range_min)) + range_min;
	return(u);
}


int main() {
	setlocale(LC_ALL, "fr-FR");
	// Seed the random-number generator with the current time so that
	// the numbers will be different every time we run.
	srand((unsigned)time(NULL));

	int tab[TAILLE];
	int* curseur = tab;
	int nb_recher;

	for (int i = 0; i < TAILLE;i++) { // on remplie notre tableau de 100 éléments avec un nombre entre 0 et 20
		tab[i] = rangedRand(0, 21);
		printf("\n%d : %d", i, tab[i]);
	}

	printf("\nEntrer la valeur recherchée : ");
	scanf_s("%d", &nb_recher); // on demande la valeur

	for (int i = 0; i < TAILLE;i++) { // on parcourt le tableau 
		if (*curseur == nb_recher) { // on regarde si notre pointeur pointe le nombre demandé
			printf("La valeur %d a été trouvée en %ld", nb_recher, curseur - tab); // on fait la phrase de départ
			break; //curseur - tab permet de savoir l'index de l'occurence
		} 
		curseur++; // on avance notre pointeur dans le tableau
	}
	int premier_occ = curseur - tab;
	curseur = tab; // on renitialise le pointeur

	
	for (int i = premier_occ ; i < TAILLE;i++) { 
		if (*curseur == nb_recher) {
			printf(" puis en %d,", curseur - tab);
		}
		curseur++;
	}

	return(EXIT_SUCCESS);
}