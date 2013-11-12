#include <stdio.h>
#include <stdlib.h>
// - Ajouter un cadre en #.
void printMap(int map[20][20], int pos[2]){
	int x, y;
	for(x=0; x<=19; x++){
		for(y=0; y<=19; y++){
			if (x==pos[0] && y==pos[1]){
				
				printf("X ");
			}
			else{
				switch(map[x][y]){
					case 0: //Herbe
						printf("\033[01;32m,\033[0m ");
						break;
					case 1: //Fleurs
						printf("\033[00;31m*\033[0m ");
						break;
					case 2: //Arbres
						printf("\033[00;33mY\033[0m ");
						break;
					case 3: //Roche
						printf("\033[00;37mo\033[0m ");
						break;
					case 4: //Clé
						printf("\033[01;33mF\033[0m ");
						break;
					case 5: //PO
						printf("\033[01;33m0\033[0m ");
						break;
					case 6: //Cadenas
						printf("\033[01;32mQ\033[0m ");
						break;
					case 7: //Piège
						printf("\033[00;35m#\033[0m ");
						break;
					case 8://Monstre
						printf("\033[01;31m&\033[0m ");
						break;
				}
			}
		}
		printf("\n");
	}
}