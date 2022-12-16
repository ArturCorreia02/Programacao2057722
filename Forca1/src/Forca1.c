/*
 ============================================================================
 Name        : Forca1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Forca1Utils.h"
#include <locale.h>
#include <string.h>
#include <time.h>


/*static const char* getRandomWord(){

		int t = 0;
		srand((unsigned)time(&t));

		int random = rand() % 3;
		FILE *fp;
		fp = fopen("Secrets.txt", "r");

		char buff[60];
		int i = 0;

		char secret[12];
		while (fgets(buff, 60, fp) != NULL){
			buff[strcspn(buff,"\n")] = '\0';
		}
		fclose(fp);
		return"";*/

int main(void) {


		//const char* secret = getRandomWord();
		//printf("%i \n", strlen(secret));

		puts("Bem-vindo ao Jogo da Forca");
		int menu;

		while (menu != 4) {
			displayMenu();
			puts("Escolha uma opção:");
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
				puts("Pontuação");
				break;
			case 4:
				puts("Sair");
				break;
			default:
				puts("Opção inválida");
			}
		}

	return EXIT_SUCCESS;
}
