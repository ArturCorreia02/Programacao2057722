/*
 ============================================================================
 Name        : ficha3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
/*
//==========================================alinea1=========================//
	float P1 = 12.5;
	float P2 = 15.6;
	float Freq = 16.2;
	float notafinal = (P1 * 0.3 + P2 * 0.3 + Freq * 0.4);
		if(notafinal > 9.5){
			printf("O aluno passou %f", notafinal);
		}else{
			printf("O aluno reprovou %f", notafinal);
		}
*/
//==========================================alinea2=========================//
/*
	float A1 = 1.69;
		if(A1 < 1.50){
			puts("Estatura baixa");
		}else if(A1 >= 1.50 && A1 < 1.70){
			puts("Estatura média");
		}else{
			puts("Estatura alta");
		}
*/
//==========================================alinea3=========================//
/*
	int mes = 10;
	if(mes == 1){
		puts("Janeiro");
	} else if(mes == 2){
		puts("fevereiro");
	} else if(mes == 3){
		puts("marco");
	} else if(mes == 4){
		puts("abril");
	} else if(mes == 5){
		puts("maio");
	} else if(mes == 6){
		puts("junho");
	} else if(mes == 7){
		puts("julho");
	} else if(mes == 8){
		puts("agosto");
	} else if(mes == 9){
		puts("setembro");
	} else if(mes == 10){
		puts("outubro");
	} else if(mes == 11){
		puts("novembro");
	} else if(mes == 12){
		puts("dezembro");
	}
	else{
		puts("Mes invalido");
	}
*/
//==========================================alinea4=========================//
/*
	float operando1 = 2;
	float operando2 = 4;
    char operador = '+';

    float resultado = 0;

    if(operador == '+'){
    	resultado = operando1 + operando2;
    }
    else if(operador == '-'){
        	resultado = operando1 - operando2;
        }
    else if(operador == '*'){
        	resultado = operando1 * operando2;
        }
    else if(operador == '/'){
        	resultado = operando1 / operando2;
        }
    else if(operador == '^'){
    		resultado =
    }
    printf("%.2f %c %.1f = %.1f", operando1, operador, operando2, resultado);
*/
	//==========================================alinea5=========================//
/*

	int soma = 0;
	int max =10;
	int i = 1;

	while(i <= max){
		soma = soma + i;
		i++;
	}
	printf("soma até %i é: %i", max, soma);
*/
	//==========================================alinea6=========================//
/*
	int multiplo = 5;
	int max2 = 20;
	int i2 = 0;
	printf("%i \n", 1);
	while(i2 < max2){
		i2 += multiplo;
		printf("%i \n", i2);
	}

	int multiplo = 5;
	int max2 = 20;
	int i2 = 1;

	while(i2 < max2){
		if(i2 % multiplo == 0){
		printf("%i \n", i2);
		}
		i2++;
	}
*/
	//==========================================alinea7=========================//
/*
	int n = 5;
	int fatorial = 1;

	while (n >= 1){
		fatorial = fatorial * n;
		n--;
	}
	printf("%i e: %i \n", 5,fatorial);
*/
	//==========================================alinea8=========================//

	int ano = 100;

	if(ano % 100 == 0){
	}if(ano % 400 == 0){
		puts("É um ano bissexto");
	}else if(ano % 4 == 0){
		puts("É um ano bissexto");
	}
	else if(ano % 100 != 0){
		puts("Não é um ano bissexto");
	}else {
		puts("Não é um ano bissexto");
	}

	return EXIT_SUCCESS;
}
