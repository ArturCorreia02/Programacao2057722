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

	float operando1 = 2;
	float operando2 = 4;
    char operador = '+';

    float resultado = 0;

    if(operador == '+'){
    	resultado = operando1 + operando2;
    }
    if(operador == '-'){
        	resultado = operando1 - operando2;
        }
    if(operador == '*'){
        	resultado = operando1 * operando2;
        }
    if(operador == '/'){
        	resultado = operando1 / operando2;
        }
    printf("%f %c %f = %f", operando1, operador, operando2, resultado);







	return EXIT_SUCCESS;
}
