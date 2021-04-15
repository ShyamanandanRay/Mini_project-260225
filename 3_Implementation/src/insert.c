#include "header.h"
#include <stdio.h>
#include <stdlib.h>




void insert_details()
{
	
	FILE *fp;
	
	printf("Enter movie code :- ");	
	scanf("%4s",b.code);
	printf("Enter  name :- ");	
	scanf("%4s",b.name);
	printf("Enter Release Date:- ");	
	scanf("%4s",b.date);
	printf("Enter Ticket Price:- ");	
	scanf("%d",&b.cost);
	
	fp=fopen("data.txt","a");

	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"%s %s %s %d \n",b.code,b.name,b.date,b.cost);
		printf("Recorded Successfully");
	}
		printf("\n");
	fclose(fp);
	system("cls");
}