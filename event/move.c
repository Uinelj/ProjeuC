#include <stdio.h>
#include <stdlib.h>
int move(int pos[2], int map[20][20], int clip[9]){
	char dir;
	printf("Choisis une direction :\n");
	scanf("%c", &dir);
	switch(dir){
		case 'z':
			if(clip[map[pos[0]-1][pos[1]]]==0){ //Si la case n'est pas clippée on peut passer.
			pos[0]--;
			}
			break;	
		case 's':
			if(clip[map[pos[0]+1][pos[1]]]==0){
			pos[0]++;
			}
			break;
		case 'q':
		    if(clip[map[pos[0]][pos[1]-1]]==0){
			pos[1]--;
			}
			break;
		case 'd':
			if(clip[map[pos[0]][pos[1]+1]]==0){
			pos[1]++;
			}
			break;
	}
	return 0;

}