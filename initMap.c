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
	map[0][4]= 1; //Fleurs <3 xoxo noclip
	map[1][7]= 1;
	map[12][8]= 2;//Arbres clip
	map[10][19]= 2;
	map[19][5]= 2;
	map[9][8]= 3; //Rochers clip
	map[4][4]= 3;
	map[5][7]= 4; //Clé noclip
	map[9][2]= 5; //PO noclip
	map[1][8]= 5;
	map[3][1]= 5; 
	map[4][6]= 5;
	map[15][12]= 6;//Cadenas noclip
	map[7][7]= 7; //Piège noclip
	map[5][4]= 7; 
	map[9][2]= 8; //Monstre noclip
	map[1][6]= 8;
	/*
	Clip : 2, 3
	*/
}