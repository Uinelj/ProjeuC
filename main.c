#include <stdio.h>
#include <stdlib.h>
#include "printMap.h"
#include "initMap.h"
#include "move.h"
#include "values.h"
int main(){
	int pos[2];
	pos[0]=0; //Positions initiales.
	pos[1]=0;
	int data[4];
	data[0]=10;//vie
	data[1]=0; //PO
	data[2]=1; //lvl
	data[3]=0; //XP
	int map[20][20];
	int event=0;
	initMap(map);
	while(1){
		if (event !=0){
			//Lancer l'event, qui doit retourner à 0 a la fin.
		}
		else{
		values(data);
		printMap(map, pos);
		move(pos);
		
		}
	}
	return 0;
}