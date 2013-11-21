/*
TODO : 
- Pouvoir définir x et y manuellement.
- Placement des différents objets random.
*/
#include <stdio.h>
int initMap(int map[20][20],int clip[9], int mapNumber){
	//incrémenteurs.
	
	// for(x=0; x<=19; x++){
	// 	for(y=0; y<=19; y++){
	// 		map[x][y] = 0; // herbe ( A modifier en "sol ?")
	// 	}
	// }
	clip[2]=1;
	clip[3]=1;
	clip[6]=1;
	// map[0][4]= 1; //Fleurs <3 xoxo noclip (Détritus ?)
	// map[1][7]= 1;
	// map[12][8]= 2;//Arbres clip (Cailloux ?)
	// map[10][19]= 2;
	// map[19][5]= 2;
	// map[0][4]= 3; //Rochers clip (Murs ?)
	// map[1][4]= 3;
	// map[2][4]= 3;
	// map[3][4]= 3;
	// map[4][4]= 3;
	// map[3][2]= 3;
	// map[4][2]= 3;
	// map[3][1]= 3;
	// map[3][0]= 3;
	// map[5][7]= 4; //Clé noclip
	// map[9][2]= 5; //PO noclip
	// map[1][8]= 5;
	// map[4][6]= 5;
	// map[15][12]= 6;//Cadenas clip
	// map[7][7]= 7; //Piège noclip
	// map[5][4]= 7; 
	// map[9][2]= 8; //Monstre noclip
	// map[1][6]= 8;
FILE* fichier = NULL;
	int caract = 0;
	int x, y;
	fichier = fopen("map/1", "r");
	if (fichier != NULL){
	// 	do
	// 	{
	// 		caract = fgetc(fichier);
	// 		printf("%c", caract);
	// 	} while (caract != EOF);
		for (x=0; x<=19; x++){
			for(y=0; y<=19; y++){
				caract = fgetc(fichier)-48;
				map[x][y] = caract; 
				//printf("%d", map[x][y]);
			}
			fseek(fichier, 1, SEEK_CUR);
		}
	}
	return 0;
}