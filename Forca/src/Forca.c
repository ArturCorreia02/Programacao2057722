/*
 ============================================================================
 Name        : Forca.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "ForcaUtyils.h"

static const char* getRandomWord(){
	FILE *fp;
	fp = fopen("Secrets.txt", "r");
	char buff[60];
	while (fgets(buff, 60, fp) != NULL){
		printf("%s", buff);
	}
	fclose(fp);
	return"";
}
int main(void) {

	puts("Bem-vindo ao Jogo da Forca");
	int menu;
	while (menu != 4) {
		displayMenu();
		puts("Escolha uma op��o:");
		scanf("%i", &menu);

		switch (menu) {
		case 1:
			displayInstructions();
			break;
		case 2:
			puts("Jogar");
			play();
			break;
		case 3:
			puts("Pontua��o");
			break;
		case 4:
			puts("Sair");
			break;
		default:
			puts("Op��o inv�lida");
		}
	}

	return EXIT_SUCCESS;
}