/*
 * String.c
 *
 *  Created on: 02/12/2022
 *      Author: 2057722
 */

#include "StringUtils.h"
#include <string.h>

void reveseString(char str[]){
	int len = strlen(str);
	for (int i = 0; i < len; i++){
		//printf("%c", str[i]);

	}
	for (int i = len - 1; i >= 0; i--){
			//printf("%c", str[i]);
	}
}

int indiceChar(char str[], char charcter){

	int len = strlen(str);
	for(int i = 0; i < len; i++){
		if (charcter == str[i])
		return i;
	}
	return -1;

}

int sumVogals(char str[]){
	char vogals[6] = "aeiou";
	int sum = 0;
	for(int i = 0; i <  strlen(str); i++){
		for (int j = 0; j <  strlen(str); j++){
			if (str[i] == vogals[j])
			sum++;
		}
	}
	return sum;
}

int sumConsuantes(char str[]){
	char vogals[6] = "aeiou";
		int sum = 0;
		for(int i = 0; i <  strlen(str); i++){
			for (int j = 0; j <  strlen(str); j++){
				if (str[i] != vogals[j])
				sum++;
			}
		}
		return sum;
	}


