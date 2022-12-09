/*
 * ForcaUtyils.c
 *
 *  Created on: 06/12/2022
 *      Author: 2057722
 */

#include "ForcaUtyils.h"

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
			"O jogo da forca é um jogo no qual o jogador tem de acertar na palavra proposta,\n"
					"tendo apenas como dicas o número de letras e o tema.\n"
					"A cada letra errada, é desenhada uma parte do corpo do boneco que pendura numa forca.\n"
					"O jogo apenas termina de duas maneiras:\n"
					"Com o acertar da palavra;\n"
					"Ou perdendo as vidas todas.");
}

void play() {

	int lives = 8;
	char board[12];
	char secret[12] = "hello";
	int len = strlen(secret);
	for (int i = 0; i < len; i++) {
		board[i] = '_';
	}

	while (lives != 0) {

		displayBoard(board);

		char guess;
		puts("Introduza jogada:");
		scanf(" %c", &guess);
		int count = 0;
		for (int i = 0; i < len; i++) {
			if (secret[i] == guess) {
				board[i] = guess;
				count++;
			}
		}

		if (count == 0) {
			lives--;
			printf("Falhou!!! Tem %i", lives);
		}
	}
}
displayBoard(char board[]) {
	int len = strlen(board);
	for (int i = 0; i < len; i++) {
		printf("%c ", board[i]);
	}

}
