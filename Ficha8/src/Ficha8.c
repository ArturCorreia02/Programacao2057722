/*
 ============================================================================
 Name        : Ficha8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void readFileByChar(){
	FILE *fp;
	fp = fopen("text.txt", "r");

	char c = fgetc(fp);

	while(c != EOF){
		printf("%c\n", c);
		c = fgetc(fp);
	}
	fclose(fp);
}
void readByLine() {
	FILE *fp;
	fp = fopen("text.txt", "r");
	char buff[256];
	while(fgets(buff, 256, fp) != NULL){
		puts(buff);
	}
	fclose(fp);
}

void countLine(){
	FILE *fp;
	fp = fopen("text.txt", "r");
	char buff[256];
	int line = 0;
	while(fgets(buff, 256, fp) != NULL){
		int count = line++;

	printf("%i", count);
	}
	fclose(fp);
}

void writeGrades(){
	FILE *fp;
		fp = fopen("grades.txt", "w");
	char names [4][255] = {"Artur","Helder","Diogo","Magalhaes"};
	int grades [4] = {16,10,12,17};
	float avg = 0;

	int size = sizeof(grades) / sizeof(int);
	for (int i = 0; i < size; i++){

		int media = grades[i] / size;
		fprintf(fp, "%s : %i \n", names [i], grades[i]);
		avg += grades[i];
	}
	avg = avg /size;
	fprintf(fp, "Media : %f", avg);
fclose(fp);
}
void readGraades(){
	FILE *fp;
	fp = fopen("grades.txt", "r");
	char buff[256];
	char *token = ":";
	char *split;

	while(fgets(buff, 256, fp) != NULL){
		split = strtok(buff, token);
		while (split != NULL){
			puts(split);
			split = strtok(NULL, token);
		}

	}
	fclose(fp);
}
void randomWord(){
	FILE *fp;
			fp = fopen("grades.txt", "w");
	char words[10][20] = {"Lorem", "Ipsum", "texto", "modelo", "indústria", "tipográfica", "impressão", "vindo", "texto", "padrão"};
		int t = 0;
		srand((unsigned) time(&t));
		for(int i = 0; i < 10 ; i++){
			int random = rand() % 10;
			fprintf(fp, "%s \n", words[random]);
		}
}
int main(void) {
	//readFileByChar();
	//readByLine();
	//countLine();
	//writeGrades();
	//readGraades();
	randomWord();

	return EXIT_SUCCESS;
}
