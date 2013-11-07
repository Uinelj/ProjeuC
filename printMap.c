#include <stdio.h>
#include <stdlib.h>
// - Ajouter un cadre en #.
void printMap(int map[20][20], int pos[2]){
	int x, y;
	system("clear");
	for(x=0; x<=19; x++){
		for(y=0; y<=19; y++){
			if (x==pos[0] && y==pos[1]){
				
				printf(" X ");
			}
			else{
				printf(" %d ", map[x][y]);
			}
		}
		printf("\n");
	}
}