#include <stdio.h>
// Fonction event. 
// Sert à  : PO, vies, XP, lvl, encounters, triggers.
// Racaillou = typ
void event(int pos[2],int map[20][20],int clip[9], int data[5]){
	int requiredXP[5];
	requiredXP[1] = 50; //faire avec une suite. 
	requiredXP[2] = 70;
	requiredXP[3] = 110;
	requiredXP[4] = 170;
	requiredXP[5] = 250;
	//PO
	if(map[pos[0]][pos[1]]==5){
		data[1]++;
		map[pos[0]][pos[1]]=1;
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
		map[pos[0]][pos[1]]=1;     /******/
	}								/* */         //WONDERFUL OR TREE :D 
	else if((map[pos[0]-1][pos[1]]==6||
			map[pos[0]+1][pos[1]]==6 ||
			map[pos[0]][pos[1]-1]==6 ||
			map[pos[0]][pos[1]+1]==6) && data[4]==1){	
		data[4]=0;
		clip[6]=0;
	}
	//Lvl // XP
	if(data[3]>=requiredXP[data[2]]){
		data[3]-=requiredXP[data[2]];
		data[2]++;
	}

}