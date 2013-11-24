#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printDialog(int dialog[1], int fullscreen){
	FILE* fichier = NULL; //On charge les textes.
	const char racaillou[]="text/";
	char text[500]="";
	char textName[10]="";
	if(fullscreen==1){
		system("clear");
		// Faire un cadre pas dégeu, afficher du texte, et gérer la sortie du fullscreen.
		}
	// switch(dialog[0]){
	// 	case 1:
	// 	 sprintf(textName, "%s%d", racaillou, dialog[0]);
	// 	 break;
	// 	case 2:
	// 	 sprintf(text, "Vous vous réveillez dans une salle en ruine. Autour de vous, des masses difformes de déchets. Plus loin, un cadavre.");
	// 	 break;
	// 	case 3:
	// 	 printf("rien\n");
	// 	 break;
	// }
	sprintf(textName, "%s%d", racaillou, dialog[0]);
	fichier = fopen(textName, "r");
	if (fichier !=NULL){
		fgets(text, 500, fichier);
	}
	printf("%s\n",text);	// Merci Bastien ! 
}