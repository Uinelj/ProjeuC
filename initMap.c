/*
TODO : 
- Pouvoir définir x et y manuellement.
- Placement des différents objets random.
*/
#include <stdio.h>
void initMap(int map[20][20]){
	int x, y;
	for(x=0; x<=19; x++){
		for(y=0; y<=19; y++){
			map[x][y] = 0; // herbe
		}
	}
	map[0][4]= 1; //Arbres
	map[1][7]= 1;
	map[12][8]= 1;
	map[10][19]= 1;
	map[19][5]= 1;
	map[9][8]= 1;
	map[4][4]= 1;
}