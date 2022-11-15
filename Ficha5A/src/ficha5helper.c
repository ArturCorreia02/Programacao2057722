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
