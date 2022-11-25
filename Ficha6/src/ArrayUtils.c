/*
 * ArrayUtils.c
 *
 *  Created on: 25/11/2022
 *      Author: 2057722
 */

#include "ArrayUtils.h"

//alinea1
int indexOf (int array[], int value, int size){

	int i;

	for (i=0; i < size; i++){
		if(array[i] == value){
			return i;
		}
	}
	return -1;
}


int indexOfMax(int array[], int size){

	int max = array[0];
	int index = 0;

	for(int i = 1; i < size; i++){
			if (array [i] > max){
				max = array [i];
				index = i;
		}
	}
	return index;
}

int indexOfMin(int array[], int size){

	int min = array[0];
	int index = 0;

	for(int i = 1; i < size; i++){
			if (array [i] < min){
				min = array [i];
				index = i;
		}
	}
	return index;

}

int valMax(int array[], int size){
	int max = array[0];
	for(int i = 0; i < size; i++){
		if (array[i] > max){
			max = array[i];
		}
	}
	return max;
}

int Max(int array[], int size){
	return array[indexOfMax(array, size)];
}

int Min(int array[], int size){
	return array[indexOfMin(array, size)];
}







