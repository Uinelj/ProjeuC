#include <stdio.h>
#include <stdlib.h>
#include "print/printMap.h"
#include "print/printData.h"
#include "event/initMap.h"
#include "event/move.h"
#include "event/event.h"
#include "print/printDialog.h"
int main(){
	system("clear");
	/* ------ Définitions ------*/
	int pos[2];
	pos[0]=5; //Positions initiales.
	pos[1]=5;
	int data[5];
	int clip[9]={0}; //Array qui te dit si c'est clip ou pas.
	data[0]=10;//vie
	data[1]=0; //PO
	data[2]=1; //lvl
	data[3]=0; //XP
	data[4]=0; //Clé
	int map[20][20];
	/* -------------------------*/
	initMap(map, clip, 1);
	while(1){
		printData(data);
		printMap(map, pos);
		printDialog(1);	
		move(pos, map, clip); /* --Commentaire en mémoire de la SegFault due à ma bêtise. Puisses-tu reposer en paix.(Merci madame, merci Bastien !)-- */
		event(pos, map, clip, data);
		system("clear");
	}
	return 0;
}