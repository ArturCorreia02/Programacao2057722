/*
 * Forca1Utils.c
 *
 *  Created on: 16/12/2022
 *      Author: user
 */

#include "Forca1Utils.h"
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

	int compereString(char str1[], char str2[]){
		return strcmp(str1, str2);
	}

void displayMenu() {
	puts("=====================================");
	puts("/t Instruções");
	puts("/t Jogar");
	puts("/t Pontuação");
	puts("/t Sair");
	puts("=====================================");

}



void displayInstructions() {
	printf(
			"O jogo da forca e um jogo no qual o jogador tem de acertar na palavra proposta,\n"
					"tendo apenas como dicas o número de letras.\n"
					"A cada letra errada, perde uma vida.\n"
					"O jogo apenas termina de duas maneiras:\n"
					"Com o acertar da palavra;\n"
					"Ou perdendo as vidas todas.\n");
}

void play() {

	/*puts("Introduza o seu nome:");
	char nome[12];
	scanf("%c",nome);*/

	int lives = 8;

	char secret[12] = "Hello";

	//getRandomWord();

	int len = strlen(secret);

	char board[12];

	int count = 0;

	int tries = 6;

	char guess;

	int comp = 1;

	for (int i = 0; i < len; i++) {
		board[i] = '_';
	}


	while (tries > 0 || compareString(board, secret) == 0){
			count = 0;

		displayBoard(board);

		puts("Introduza jogada:");
		scanf(" %c", &guess);

		for (int i = 0; i < len; i++) {
			if (secret[i] == guess) {
				board[i] = guess;
				count++;
				printf("Acertou!!! Tem %i vidas\n",lives);
			}
		}

		if (count == 0) {
			lives--;
			printf("Falhou!!! Tem %i vidas\n", lives);
		}
	}

void displayBoard(char board[]) {
	int len = strlen(board);
	for (int i = 0; i < len; i++) {
		printf("%c ", board[i]);
	}
}


