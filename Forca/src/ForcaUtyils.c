/*
 * ForcaUtyils.c
 *
 *  Created on: 06/12/2022
 *      Author: 2057722
 */

#include "ForcaUtyils.h"

void displayMenu(){
	puts("=====================================");
	puts("/t Instru��es");
	puts("/t Jogar");
	puts("/t Pontua��o");
	puts("/t Sair");
	puts("=====================================");

}

void displayInstructions(){
	printf("O jogo da forca � um jogo no qual o jogador tem de acertar na palavra proposta,"
			"tendo apenas como dicas o n�mero de letras e o tema."
			"A cada letra errada, � desenhada uma parte do corpo do boneco que pendura numa forca. "
			"O jogo apenas termina de duas maneiras:"
			"Com o acertar da palavra;"
			"Ou perdendo as vidas todas.");
}
