#include "header.h"
#include <stdio.h>
#include <stdlib.h>

void viewAll()
{
	
	char ch;
	FILE *fp;

	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{	
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);
		
	}
	
	fclose(fp);

}

