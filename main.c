#include <stdio.h>
#include <stdlib.h>
#include "print/printMap.h"
#include "print/printData.h"
#include "event/initMap.h"
#include "event/move.h"
#include "event/event.h"
#include "print/printDialog.h"
int main(){
	// Faire un if ici pour voir si on utilise les datas de base ou celles d'une save.
	/* ------ Définitions ------*/ 	
	int pos[2]; //Tableau des positions du joueur.
	pos[0]=5; //Positions initiales.
	pos[1]=5;
	int data[5]; //Données de jeu.
	data[0]=10;//vie
	data[1]=0; //PO
	data[2]=1; //lvl
	data[3]=0; //XP
	data[4]=0; //Clé
	int clip[9]={0}; //Array qui te dit si c'est clip ou pas.
	int map[20][20]; //Map active du personnage.
	int mapNumber[1]={3};
	system("clear");
	/* -------------------------*/
	initMap(map, clip, mapNumber);
	while(1){
		printData(data, pos);
		printMap(map, pos);
		printDialog(1);	
		move(pos, map, clip); /* --Commentaire en mémoire de la SegFault due à ma bêtise. Puisses-tu reposer en paix.(Merci madame, merci Bastien !)-- */
		event(pos, map, clip, mapNumber, data);
		system("clear");
	}
	return 0;
}