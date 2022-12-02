/*
 ============================================================================
 Name        : Ficha6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "ArrayUtils.h"

int main(void) {

//alinea1
	int array[5] = {10, 6, 7, 6, 3};

	int value = 8;
	int size = 5;

	int index = indexOf(array, value, size);

	printf("O indice do valor %i e: %i", value, index);


	int indexMax = indexOfMax(array, size);
	//printf("O indice do valor maximo e: %i", indexMax);

	int indexMin = indexOfMin(array, size);
		//printf("O indice do valor minimo e: %i", indexMin);

	int max = Max(array, size);
		//printf("O valor maximo e: %i", Max);

	int min = Min(array, size);
			//printf("O valor minimo e: %i", min);

	float avg = average(array, size);
		//printf("O valor da media é %f", avg);

	float var = variance(array, size);
			//printf("O valor da variancia é %f", var);

	float std = standerdDeviation(array, size);
		//printf("O valor do desvio padrão é %f", std);





	return EXIT_SUCCESS;
}
