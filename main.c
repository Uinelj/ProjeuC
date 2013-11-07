#include <stdio.h>
#include "printMap.h"
#include "initMap.h"
#include "move.h"
int main(){
	int pos[2];
	pos[0]=0; //Positions initiales.
	pos[1]=0;
	int map[20][20];
	int event=0;
	initMap(map);
	while(1){
		if (event !=0){

		}
		else{
		printMap(map, pos);
		move(pos);
		if (pos[0]
		}
	}
	return 0;
}