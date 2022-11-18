/*
 * ficha5helper.c
 *
 *  Created on: 15/11/2022
 *      Author: 2057722
 */

#include "Ficha5helper.h"
//IPLEMENTAÇAO DAS FUNÇOES
//alinea1
void atm(float amount) {
	float balance = 5000;
	if (balance >= amount) {
		float availeble = balance - amount;
		printf("Levantou: %.2f€, saldo disponivel: %.2f€", amount, availeble);
	} else {
		puts("Saldo insuficiente!!!");
	}
}

//alinea2
void validatePIN() {
	int tries = 0;

	int code = 9999;
	int PIN = 0;
	while (PIN != code && tries < 3){
		puts("introduza o pin");
		scanf("%i", PIN);


	if (PIN == code) {
		puts("PIN correto");

	} else {
		puts("PIN incorreto");
		tries++;
		printf("Tem apenas %i tentativas \n", 3 - tries);
		}
	}
}
//alinea3
void CalcularTempoDeTrabalho(int he, int me, int se, int hs, int ms, int ss){

	int hes = he * 3600 + me * 60 + se;
	int hss = hs * 3600 + ms * 60 + ss;

	int diff = hss - hes;

	int horas = diff /3600;
	int resto_horas = diff % 3600;

	int minutos = resto_horas / 60;
	int segundos = resto_horas % 60;

	printf("Total em segundos: %i \n", diff);

	printf("Horas %i ,", horas);

	printf("Minutos %i ,",minutos);

	printf("Segundos %i ,",segundos);
}
//alinea4
void adivinha(){

	int t = 0;

	srand((unsigned) time(&t));

	int segredo = rand() % 101;
	int palpite = 0;

	while (palpite != segredo){
	puts("Indique o seu palpite!");
	scanf("%i", &palpite);

	if(palpite == segredo){
		puts("ACERTOU!");
		break;

	}else{
		if(palpite > segredo) {
			puts("ACIMA!");
		}else{
			puts("ABAIXO!");
			}
		}
	}
}





