#include <stdio.h>
#include "printMap.h"
#include "initMap.h"

int main(){
	int pos[2];
	pos[0]=0;
	pos[1]=0;
	int map[20][20];
	initMap(map);
	while(1){
		printMap(map, pos);	
	}
	return 0;
}