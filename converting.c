// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"


void converting(void) {
	// V1
	printf("*** start of Converting Strings to int Demo ***\n");
	char	intString[BUFFER_SIZE];
	int		intNumber;
	do {
		printf("Type an int numberic string (q - to quit) : \n");
		fgets(intString, BUFFER_SIZE, stdin);
		intString[strlen(intString) - 1] = '\0';
		if (strcmp(intString, "q") != 0) {
			intNumber = atoi(intString);
			printf("Converted number is %d\n", intNumber);
		}
	} while (strcmp(intString, "q") != 0);
	printf("*** End of Converting Strings  to int Demo ***\n\n");

	// V2
	printf("*** Start of Converting Strings to double Demo ***\n");
	char	doubleString[BUFFER_SIZE];
	double	doubleNumber;
	do {
		printf("Type the double numberic string (q - to quit):\n");
		fgets(doubleString, BUFFER_SIZE, stdin);
		doubleString[strlen(doubleString) - 1] = '\0';
		if ((strcmp(doubleString, "q") != 0)) {
			doubleNumber = atof(doubleString);
			printf("Coverted number id %f\n", doubleNumber); 
		}
	} while (strcmp(doubleString, "q") != 0);
	printf("*** End of Converting Strings to double Demo ***\n\n");

}

