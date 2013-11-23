#include <stdio.h>
#include <stdlib.h>

void printData(int data[5], /*debug*/int pos[2]){
	printf("Vie : %d, PO : %d, Lvl : %d, XP : %d, x:%d, y:%d\n", data[0], data[1], data[2], data[3], pos[0], pos[1]);
}