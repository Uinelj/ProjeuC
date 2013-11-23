/*
TODO : 
- Pouvoir définir x et y manuellement.
- Placement des différents objets random.
*/
#include <stdio.h>
int initMap(int map[20][20],int clip[9], int mapNumber[1]){
	clip[2]=1; //Cases impossibles a traverser
	clip[3]=1;
	clip[6]=1;
	FILE* fichier = NULL; //On charge la map.
	int caract = 0;
	int x, y;
	const char racaillou[] = "map/";
	char mapName[10]="";
	sprintf(mapName, "%s%d", racaillou, mapNumber[0]);
	fichier = fopen(mapName, "r");
	if (fichier != NULL){
		for (x=0; x<=19; x++){
			for(y=0; y<=19; y++){
				caract = fgetc(fichier)-48;
				map[x][y] = caract; 
			}
			fseek(fichier, 1, SEEK_CUR); //Merci Vincent !
		}
		fclose(fichier);
	}
	return 0;
}