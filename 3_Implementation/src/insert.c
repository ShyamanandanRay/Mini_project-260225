#include "header.h"
#include <stdio.h>
#include <stdlib.h>




void insert_details()
{
	int i=0,price=0;;
	
	FILE *fp;
	
	printf("Enter movie code :- ");	
	scanf("%s",b.code);
	printf("Enter  name :- ");	
	scanf("%s",b.name);
	printf("Enter Release Date:- ");	
	scanf("%s",b.date);
	printf("Enter Ticket Price:- ");	
	scanf("%d",&b.cost);

	printf("Enter 1 if you want to change the price\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("Enter new price of the movie ticket:- ");
		scanf("%d",&price);
		b.cost=change_price(price);
	}
	
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