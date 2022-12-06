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

int main(void) {

	puts("Bem-vindo ao Jogo da Forca");
	int menu;
while(menu != 4){
	displayMenu();
	puts("Escolha uma opção:");
	scanf("%i", &menu);

	switch(menu){
	case 1 :
		displayInstructions();
		break;
	case 2 :
		puts("Jogar");
		break;
	case 3 :
		puts("Pontuação");
		break;
	case 4 :
		puts("Sair");
		break;
	default :
		puts("Opção inválida");
	}
}



	return EXIT_SUCCESS;
}
