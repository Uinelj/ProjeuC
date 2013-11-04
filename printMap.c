#include <stdio.h>
void printMap(int map[19][19], int pos[2]){
	int x, y;
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