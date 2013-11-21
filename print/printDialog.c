#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printDialog(int dialog){
	char text[500];
	switch(dialog){
		case 1:
		 sprintf(text, "Vous vous réveillez dans un ravin asseché..");
		 printf("%s\n",text);	// Merci Bastien ! 
		 break;
		case 2:
			printf("rien");
			break;

	}
}