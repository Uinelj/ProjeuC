#include <stdio.h>
#include "initMap.h"
// Cette fonction gère tout ce qui est relatif à des évènements dans le jeu.
void event(int pos[2],int map[20][20],int clip[9], int mapNumber[1], int dialogNumber[1], int data[5]){
	int requiredXP[5];
	requiredXP[1] = 50; //faire avec une suite. 
	requiredXP[2] = 70;
	requiredXP[3] = 110;
	requiredXP[4] = 170;
	requiredXP[5] = 250;
	//PO
	if(map[pos[0]][pos[1]]==5){
		data[1]++;
		map[pos[0]][pos[1]]=0;
	}
	//Encounters (Mobs/traps)
	else if(map[pos[0]][pos[1]]==7 || map[pos[0]][pos[1]]==8){
		data[0]--;
		if(map[pos[0]][pos[1]]==8){
			data[3]+=50;
		}
		map[pos[0]][pos[1]]=1;
	}
	//Clé
	else if(map[pos[0]][pos[1]]==4){
		map[pos[0]][pos[1]]=1;
		data[4]++;
		map[pos[0]][pos[1]]=1;     /********/
	}								/*****/
	// Cadenas						/* */         //WONDERFUL OR TREE :D 
	else if((map[pos[0]-1][pos[1]]==6||
			map[pos[0]+1][pos[1]]==6 ||
			map[pos[0]][pos[1]-1]==6 ||
			map[pos[0]][pos[1]+1]==6) && data[4]==1){	
		data[4]=0;
		clip[6]=0;
	}
	//Lvl, XP
	if(data[3]>=requiredXP[data[2]]){
		data[3]-=requiredXP[data[2]];
		data[2]++;
	}
	/* Changer de map. Explications. 
	J'ai voulu au début faire un gros array 2D pour la map. Mais c'était assez syntaxiquement lourd.
	La technique employée est la suivante : En considérant un "univers" de 3x3 cartes, on a :
	1 2 3
	4 5 6
	7 8 9
	On passe latéralement en ajoutant(enlevant) 1, et de haut en bas on ajoute/enlève 3. 
	Ainsi, en étant en map 5 par exemple, on se dirige vers le bas, on arrive en map (5+3)=8.
	Ici on retranche 5 car l'univers exploitable fait 5x5 maps.
	*/
	if(pos[1]==0){
		mapNumber[0]--; //Gauche
		initMap(map, clip, mapNumber);
		pos[1]=18;
	}
	else if(pos[1]==19){
		mapNumber[0]++; //Droite
		initMap(map, clip, mapNumber);
		pos[1]=1;
	}
	else if(pos[0]==0){
		mapNumber[0]-=5; //Haut
		initMap(map, clip, mapNumber);
		pos[0]=18;
	}
	else if(pos[0]==19){
		mapNumber[0]+=5; //Bas
		initMap(map, clip, mapNumber);
		pos[0]=1;
	}
	/*Events : map 1
		Faire pop des zombies si on s'approche trop du vieil homme.
	*/
	if(mapNumber[0]==1){
		dialogNumber[0]=1;
		if(pos[0]>=15){
			dialogNumber[0]=3;
			map[3][5] = 8;
			map[4][4] = 8;
			}
	}
	//Events : map 2
	if(mapNumber[0]==2){
		dialogNumber[0]=2;
	}
}