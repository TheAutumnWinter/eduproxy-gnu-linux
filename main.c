#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//checks if connected to right network then erases or fills the run.sh file


void main()
{
	char buff3[100];
	char home[100];
	char home2[100];
	char home3[100];
	strcpy(home, getenv("HOME"));
	strcpy(home2, getenv("HOME"));
	strcpy(home3, getenv("HOME"));
	char filepath1[100] = "/.EDUPROXY/settings1";
	char filepath2[100] = "/.EDUPROXY/settings2";
	char filepath3[100] = "/.EDUPROXY/run.sh";
	strcat(home, filepath1);
	strcat(home2, filepath2);
	strcat(home3, filepath3);
	FILE *settings1 = fopen(home, "r+");
	FILE *settings2 = fopen(home2, "r+");
	printf("\nI'm workin it :3\n");
	FILE *command = popen("hostname -i", "r");
	char settings1char[100];
	char commandchar[100];
	char settings2char[100];
	char buff[50];
	strcpy(settings1char, fgets(buff, 50, settings1));
	strcpy(commandchar, fgets(buff, 50, command));
	strcpy(settings2char, fgets(buff3, 100, settings2));
	if(strcmp(commandchar, settings1char) == 0)
	{
		FILE *runafter = fopen(home3, "w+");
	//	putenv("http_proxy='eduproxy:8080'");
	//	putenv("https_proxy='eduproxy:8080'");
		fprintf(runafter, settings2char);
		printf("\nproxy set\n");
	}
	if(strcmp(commandchar, settings1char) != 0)
	{
		FILE *runafter = fopen(home3, "w+");	
	}
}
