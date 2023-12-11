#ifdef _WIN32
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#endif
// TP4  ************ EXO 4 **************************


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/********************** EXO 4 *****************************/

#define MAXMOT 256



int main() {

	char mot[MAXMOT] = { 0 };
	char mot2[MAXMOT] = { 0 };


	printf("\nEntrer le mot dont on souhaite verifier s'il s'agit d'un palindrome ?: ");
	int ret = scanf_s("%s", mot, (unsigned)_countof(mot));

	int i = 0;
	int j = strlen(mot);
	j--;// se placer sur la dernière lettre
	while (j >= 0) {
		mot2[i] = mot[j];
		i++;
		j--;
	}
	mot2[i] = '\0';
	if (strcmp(mot, mot2) == 0) {
		printf("\n C'est un palindrome");
	}
	else {
		printf("\n Ce n'est pas un palindrome");
	}



	return(EXIT_SUCCESS);
}