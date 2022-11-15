/*
 ============================================================================
 Name        : ficha5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "ficha5.h"

int main(void) {
	void atm(float amount){
		float balance = 5000;
		if(balance >= amount){
			float availeble = balance - amount;
			printf("Levantou: %.2f€, saldo disponivel: %.2f€", amount, availeble);
		}
		else{
			puts("Saldo insuficiente!!!");
		}
	}

atm(1000);
  
void pin(int code){
	int inserido;
	if(code == inserido){
	
	
}

	return EXIT_SUCCESS;
}

