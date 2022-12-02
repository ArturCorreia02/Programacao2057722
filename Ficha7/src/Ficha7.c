/*
 ============================================================================
 Name        : Ficha7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "StringUtils.h"

int main(void) {

	char str[16] = "Bom dia";
	reveseString (str);

	char index = indiceChar(str, 'p');
	// strlen(str)

	int sum =sumVogals(str);
	//printf("%i", sum);

	int sum2 = sumConsuantes(str);
	printf("%i", sum2);

	return EXIT_SUCCESS;
}
