/*
 ============================================================================
 Name        : ficha4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//=========================== alinea1 =======================================//
float calculateCilinderVolume(float radius, float height) {
	float area = M_PI * pow(radius, 2);
	float volume = area * height;
	return volume;
}

//=========================== alinea2 =======================================//

float calcularIMC(float peso, float altura) {
	float IMC = peso / pow(altura, 2);
	return IMC;

}

void mensagemIMC(float condicao) {
	if (condicao < 18.5) {
		puts("Abaixo do peso.");
	} else if (condicao >= 18.5 && condicao < 25) {
		puts("Peso normal.");
	} else if (condicao >= 25 && condicao < 30) {
		puts("Assima do peso.");
	} else {
		puts("Obeso.");
	}
}

//=========================== alinea3 =======================================//
void drawline(int widht) {
	for (int i = 0; i < widht; i++) {
		printf("%c", '*');
	}
}
void drawrectangle(int height, int width) {
	for (int i = 0; i < height; i++) {
		drawline(width);
		puts("");
	}
}
//=========================== alinea4 =======================================//

void drawtriangle(int height){
	int width = 1;
	for (int i = 0; i < height; i++) {
			drawline(width);
			puts("");
			width++;
		}
}

void drawBox(int width, int height){
	for (int i = 0; i < height; i++){
		for (int j =0; j < width; j++){
			if (i == 0 || i == height -1 || j == 0 || j == width -1){
				printf("%c", '*');

			}
		}
	}
}
int main(void) {
	/*
	 //=========================== alinea1=======================================//
	 //float radius = 2;
	 //float height = 4;
	 //float volumeC = calculateCilinderVolume(radius, height);
	 //printf("O cilindro de raio %f e altura %f tem o volume %f.", radius, height, volumeC);

	 //=========================== alinea2=======================================//

	 float peso = 70;
	 float altura = 1.73;
	 float condicao = calcularIMC(peso, altura);
	 //printf("O IMC de uma pessoa com %f de altura e %f peso é %f", altura, peso, condicao);

	 mensagemIMC(condicao);


	drawrectangle(2, 5);


	drawtriangle(10);
*/


	return EXIT_SUCCESS;
}
