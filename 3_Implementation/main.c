
#include <stdio.h>
#include <stdlib.h>


#include "header.h"

void main()
{
    front();
	 int ch,i;
	
	do
	{
		 printf("\nEnter 1 for User");
	 printf("\nEnter 2 for Admin");
	scanf("%d",&i);
	
	
	if(i==1)
	{
   		do
    	{
        /* code */
       		printf("\n\n\n\n********************************************************************");
			printf("\n");	
			printf("\t Movie Ticket booking ");
			printf("\n");
			printf("\n********************************************************************");

    		printf("\nEnter >1< To Book Ticket");
   			
    		printf("\nEnter >2< To Exit");
    		scanf("%d",&ch);
       		system("cls");

    		switch (ch)
   			{
    			case 1 :
					book_ticket();
   					break;
				
    		
				case 2:
					exit(0);
            		break;
			}
    	} while (ch!=0);
	}
    


	else
	{
		login();
 	do
	{
	
    	
		printf("\n\n\n\n********************************************************************");
		printf("\n");	
		printf("\t Movie Ticket booking ");
		printf("\n");
		printf("\n********************************************************************");
	
		printf("\nEnter >1< To Insert Movie");
   		printf("\nEnter >2< To View All Movie");
		printf("\nEnter >3< To Find Movie ");
	
		printf("\nEnter >4< To View All Transactions");
   		printf("\nEnter >0< To Exit ");

   		printf("\nEnter your Choice ::");
   		scanf("%d",&ch); 
	   system("cls");	

   		switch (ch)
   		{
    		case 1 :
    			insert_details();
   				break;
			case 2:
    			viewAll();
   				break;
    		
			case 3:
    			find();
   				break;

			
		
			case 4:
		 		old_record();
				break;

    		case 0:
    			exit(0);
    			break;

    		default:
    			printf("Wrong choice !");
    			break;
   		}
 	}while(ch!=0);
	}
	} while (ch!=0);
}
