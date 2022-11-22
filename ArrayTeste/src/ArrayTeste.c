/*
 ============================================================================
 Name        : ArrayTeste.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n[10];
	int i,j;

	for (i = 0; i < 10; i++){
	n[i] = i + 100;
	}
	for (j = 0; j < 10; j++){
		printf("Element[%d] = %d\n", j, n[j]);
	}



	int d[3] = (2, 4 , 6);

	float a[3] = (23, 4.4, 65);

	double b[3] = (2,5, 3, 54);

	char c[4] = ('a', 'b', 'c');





	return EXIT_SUCCESS;
}
