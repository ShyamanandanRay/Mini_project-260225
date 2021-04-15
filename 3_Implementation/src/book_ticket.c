#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void book_ticket()
{
 struct book b;
	FILE *fp;

	FILE *ufp;

	int total_seat,total_amount;
	char email[50];
	char name[20];

	
	char ch; //used in display all movies
	char movie_code[20]; //for searching

	// disply all moives by default for movie code
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
	
	//display ends
	printf("\n For Book ticket Choice Movie(Enter Movie Code First Letter Of Movie)\n");
	printf("\n Enter movie code :");
	scanf("%4s",movie_code);
	//system("clear");
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{	
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%4s %4s %4s %d",b.code,b.name,b.date,&b.cost);
			if(strcmp(movie_code,b.code) == 0)
			{	
				//printf("%s / %s / %s / %d\n",b.code,b.name,b.date,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\tCode ::%s",b.code);
				printf("\n\t\tMovie name ::%s",b.name);
				printf("\n\t\tdate name ::%s",b.date);
				printf("\n\t\tPrice of ticket::%d",b.cost);
			}
		}
		
	}
	printf("\n* Fill Deatails  *");
	printf("\n your name :");
	scanf("%4s",name);
	printf("\n your email id :");
	scanf("%4s",email);
	printf("\n Total number of tickets :");
	scanf("%d",&total_seat);
	
	
	total_amount = b.cost * total_seat;
	
	
	printf("\n ENJOY MOVIE \n");
	printf("\n\t\tname : %s",name);
	printf("\n\t\temail : %s",email);
	printf("\n\t\tmovie name : %s",b.name);
	printf("\n\t\tTotal seats : %d",total_seat);
	printf("\n\t\tcost per ticket : %d",b.cost);
	printf("\n\t\tTotal Amount : %d",total_amount);
	
	
	ufp=fopen("oldTransection.txt","a");
	if(ufp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(ufp,"%s %s %d %d %s %d \n",name,email,total_seat,total_amount,b.name,b.cost);
		printf("\n Record insert Sucessfull to the old record file");
	}
		printf("\n");
	fclose(ufp);
	fclose(fp);

}


