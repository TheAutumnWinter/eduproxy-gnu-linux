#include <stdio.h>
#include <string.h>
//This program surveys the computer stores the results into 2 files before the compiled program is deleted



void main()
{
	printf("\nGetting current wifi IP\n");
	char network[30];
	FILE *ipget = popen("hostname -i", "r");
	char buff[30];
	strcpy(network ,fgets(buff,30, ipget));
	printf("\nok, so %s is the network then?\n", network);
	FILE *settings1; 
	settings1 = fopen("settings1", "w+");
	FILE* settings2 = fopen("settings2", "w+");
	fprintf(settings1, "%s", network);
	fprintf(settings2, "export http_proxy='eduproxy:8080'  \n  export https_proxy='eduproxy:8080'");
}
