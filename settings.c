#include <stdio.h>

//This program surveys the questions of the user and stores them into a file before the compiled program is deleted



void main()
{
	printf("\nPlease give the name of the network that uses the proxy\n");
	char network[30];
	scanf(" %s", &network);
	printf("\nok, so %s is the network then?\n", network);
	FILE *settings1; 
	settings1 = fopen("settings1", "w+");
//	FILE* settings2 = fopen("settings2", "W");
	fprintf(settings1, "%s", network);
}
