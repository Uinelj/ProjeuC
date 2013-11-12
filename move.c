#include <stdio.h>
#include <stdlib.h>
int move(int pos[2], int map[20][20]){
	char dir;
	printf("Choisis une direction :\n");
	scanf("%c", &dir);
	// Si pos[0]=map[]
	switch(dir){
		case 'z':
				pos[0]--;
				break;	
		case 's':
			pos[0]++;
			break;
		case 'q':
			pos[1]--;
			break;
		case 'd':
			pos[1]++;
			break;
	}
	return 0;

}