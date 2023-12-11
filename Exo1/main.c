
// TP4  ************ EXO 1 **************************

#include <stdlib.h>
#include <stdio.h>
#include "tp4.h"

int main() {
	struct heure HeureDebut; // on initialise les valeurs structure
	struct heure Duree;
	struct heure HeureFin;
	HeureDebut.heure = 12; // on leur donne leurs paramètres
	HeureDebut.minute = 30;
	Duree.heure	= 0;
	Duree.minute = 45;
	HeureFin.heure = HeureDebut.heure + Duree.heure;

	if (HeureDebut.minute + Duree.minute  >= 60) {
		HeureFin.heure += 1; // on passe une heure
		HeureFin.minute = (HeureDebut.minute + Duree.minute)%60; // on retire aux minutes l'heure ajoutée puis on les ajoute à minute de l'heure de fin
	}

	//affichage des trois valeurs sous la forme hh:mm
	printf("\nHeure de début : %d:%d", HeureDebut.heure ,HeureDebut.minute); 
	printf("\nDurée : %d:%d", Duree.heure,Duree.minute);
	printf("\nHeure de fin  : %d:%d", HeureFin.heure, HeureFin.minute);


	return(EXIT_SUCCESS);
}