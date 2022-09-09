/*
 *Author:Theo Siemens-Rhodes
 *Student Number:99127730
 *E-Mail Address:theo.siemensrhodes@gmail.com
 *Lab Section:L1O
 *Date:9/21/2021
 *Purpose:Read+Print Words using Arrays
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX_CHARS = 1024

int main(void) {
	int letterCount = 0;
	int count = 0;
	char word[1024];
	char currentLetter;

	printf("Type any sentances ended by a period and then press enter to finish\n");

	do {
		scanf("%c", &currentLetter);
		if (currentLetter != 0x0A && currentLetter >= 65 && currentLetter <= 122 && currentLetter != 92 && currentLetter != 93 && currentLetter != 94 && currentLetter != 95 && currentLetter != 96) {
			word[letterCount] = currentLetter;
			letterCount++;
		}
		if (currentLetter == ".") {
			word[letterCount] = currentLetter;
			letterCount++;
		}
	} while (currentLetter != 0x0A);

	printf("Your word has %d letters in it\n", letterCount);
	printf("Your word is ");

	while (count < letterCount) {
		printf("%c", word[count]);
		count++;
	}

	printf("\n");
	return 0;
}