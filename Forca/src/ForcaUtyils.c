/*
 * ForcaUtyils.c
 *
 *  Created on: 06/12/2022
 *      Author: 2057722
 */

#include "ForcaUtyils.h"
#include <stdio.h>
#include <string.h>


void displayMenu() {
	puts("=====================================");
	puts("/t Instruções");
	puts("/t Jogar");
	puts("/t Pontuação");
	puts("/t Sair");
	puts("=====================================");

}
int compereString(char str1[], char str2[]){
	return strcmp(str1, str2);
}

void displayInstructions() {
	printf(
			"O jogo da forca é um jogo no qual o jogador tem de acertar na palavra proposta,\n"
					"tendo apenas como dicas o número de letras e o tema.\n"
					"A cada letra errada, é desenhada uma parte do corpo do boneco que pendura numa forca.\n"
					"O jogo apenas termina de duas maneiras:\n"
					"Com o acertar da palavra;\n"
					"Ou perdendo as vidas todas.\n");
}

void play() {

	/*puts("Introduza o seu nome:");
	char nome[12];
	scanf("%c",nome);*/

	int lives = 8;

	char secret[12] = "secret";

	int len = strlen(secret);

	char board[len];

	int count = 0;

	int tries = 6;

	char guess;

	int comp = 1;

	for (int i = 0; i < len; i++) {
		board[i] = '_';
	}

	while (tries > 0 || compareString(board, secret) == 0){


		displayBoard(board);

		char guess;
		puts("Introduza jogada:");
		scanf(" %c", &guess);

		for (int i = 0; i < len; i++) {
			if (guess == secret[12]) {
				board[i] = guess;
				count++;
				printf("Acertou!!! Tem %i vidas\n",lives)
			}
		}

		if (count == 0) {
			lives--;
			printf("Falhou!!! Tem %i vidas\n", lives);
		}
	}
}
void displayBoard(char board[]) {
	int len = strlen(board);
	for (int i = 0; i < len; i++) {
		printf("%c ", board[i]);
	}

}
void displayscore(){


}

int validateGame(){

	int len = strlen(secret);
		for (int i = 0; i < len; i++) {
			if(!guess1(secret[i])){
				return 0;
			}
	}
		return 1;
}

int guess1(char letra) {

	int acertou = 0;
	for(int j = 0; j < count; j++) {
		if(chutes[j] == letra) {
			acertou = 1;
			break;
		}
	}

	return acertou;
}
