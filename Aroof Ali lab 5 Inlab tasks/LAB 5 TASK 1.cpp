#include<stdio.h>
int main ()
{
	int choice1,choice2,bagweight,choice3,age,vc,permittedWeight;
	int passengerCategory,destination,priorityStatus;

	printf("Enter The Category you want\n1.Adult\n2.Student\n3.Senior Citizen\n");
	scanf("%d",&choice1);
	printf("Enter your age");
	scanf("%d",&age);
	
	switch(choice1){
	
	case 1:

	printf("You are an adult");
		printf("\nEnter 1.Domestic or 2.International\n");
		scanf("%d",&choice2);
		switch(choice2){
			case 1:
				passengerCategory = 1;
                destination = 1;
                permittedWeight = 20;
                priorityStatus = 1;

				printf("Your destination type is domestic\n");
				printf("Enter your baggage weight\n");
				scanf("%d",&bagweight);
				printf("Enter Documents are valid or not 1 for valid and 2 for not valid\n");
				scanf("%d",&choice3);
				if(bagweight>20)
				printf("Permitted allowance exceeded\n You have to enhance baggage screening to carry this\n");
				if(choice3==1)
				printf("Documents are valid\n");
				else 
				printf("Not valid\n");
				if(bagweight<=20&&choice3==1)
				printf("You are eligible to board\n");
				else {
				printf("You are not eligible to board\n");
				return 0;}
				printf ("Airport is assigning you a code\n");
				vc=age%5;
				printf("Your code is= %d",vc);
				if (vc==0)
				printf("Category A");
				else if(vc==1)
				printf("Category B");
				else if(vc==2) 
				printf("Category C");
				else if(vc==3)
				printf("Category D");
				else if(vc==4)
				printf("Category E");
				else printf("No category");
				
				break;
			case 2:
				
passengerCategory = 1;
destination = 2;
permittedWeight = 30;
priorityStatus = 2;

				printf("Your destination type is International\n");
				printf("Enter your baggage weight\n");
				scanf("%d",&bagweight);
				printf("Enter Documents are valid or not 1 for valid and 2 for not valid\n");
				scanf("%d",&choice3);
				if(bagweight>30)
				printf("Permitted allowance exceeded\n You have to enhance baggage screening to carry this\n");
				if(choice3==1)
				printf("Documents are valid\n");
				else 
				printf("Not valid\n");
				if(bagweight<=30&&choice3==1)
				printf("You are eligible to board\n");
				else {
				printf("You are not eligible to board\n");
				return 0;}
				printf ("Airport is assigning you a code\n");
				vc=age%5;
				printf("Your code is= %d",vc);
				if (vc==0)
				printf("Category A");
				else if(vc==1)
				printf("Category B");
				else if(vc==2) 
				printf("Category C");
				else if(vc==3)
				printf("Category D");
				else if(vc==4)
				printf("Category E");
				else printf("No category");
				break;
		}
		break;
	case 2:

		printf("You are a student");
		printf("\nEnter 1.Domestic or 2.International\n");
		scanf("%d",&choice2);
		switch(choice2){
			case 1:
				
passengerCategory = 2;
destination = 1;
permittedWeight = 25;
priorityStatus = 1;

				printf("Your destination type is domestic\n");
				printf("Enter your baggage weight\n");
				scanf("%d",&bagweight);
				printf("Enter Documents are valid or not 1 for valid and 2 for not valid\n");
				scanf("%d",&choice3);
				if(bagweight>25)
				printf("Permitted allowance exceeded\n You have to enhance baggage screening to carry this\n");
				if(choice3==1)
				printf("Documents are valid\n");
				else 
				printf("Not valid\n");
				if(bagweight<=25&&choice3==1)
				printf("You are eligible to board\n");
				else {
				printf("You are not eligible to board\n");
				return 0;}
				printf ("Airport is assigning you a code\n");
				vc=age%5;
				printf("Your code is= %d",vc);
				if (vc==0)
				printf("Category A");
				else if(vc==1)
				printf("Category B");
				else if(vc==2) 
				printf("Category C");
				else if(vc==3)
				printf("Category D");
				else if(vc==4)
				printf("Category E");
				else printf("No category");
				break;
			case 2:
				
passengerCategory = 2;
destination = 2;
permittedWeight = 35;
priorityStatus = 2;

				printf("Your destination type is International\n");
				printf("Enter your baggage weight\n");
				scanf("%d",&bagweight);
				printf("Enter Documents are valid or not 1 for valid and 2 for not valid\n");
				scanf("%d",&choice3);
				if(bagweight>35)
				printf("Permitted allowance exceeded\n You have to enhance baggage screening to carry this\n");
				if(choice3==1)
				printf("Documents are valid\n");
				else 
				printf("Not valid\n");
				if(bagweight<=35&&choice3==1)
				printf("You are eligible to board\n");
				else {
				printf("You are not eligible to board\n");
				return 0;}
				printf("-----------YOU ARE GOING INTERNATIONAL SO YOU HAVE BEEN GIVEN PRIORITY---------\n");
				printf ("Airport is assigning you a code\n");
				vc=age%5;
				printf("Your code is= %d",vc);
				if (vc==0)
				printf("Category A");
				else if(vc==1)
				printf("Category B");
				else if(vc==2) 
				printf("Category C");
				else if(vc==3)
				printf("Category D");
				else if(vc==4)
				printf("Category E");
				else printf("No category");
				
				break;
		}
		break;
	case 3:

		printf("You are a Senior Citizen");
		printf("\nEnter 1.Domestic or 2.International\n");
		scanf("%d",&choice2);
		switch(choice2){
			case 1:
passengerCategory = 3;
destination = 1;
permittedWeight = 30;
priorityStatus = 2;

				printf("Your destination type is domestic\n");
				printf("Enter your baggage weight\n");
				scanf("%d",&bagweight);
				printf("Enter Documents are valid or not 1 for valid and 2 for not valid\n");
				scanf("%d",&choice3);
				if(bagweight>30)
				printf("Permitted allowance exceeded\n You have to enhance baggage screening to carry this\n");
				if(choice3==1)
				printf("Documents are valid\n");
				else 
				printf("Not valid\n");
				if(bagweight<=30&&choice3==1)
				printf("You are eligible to board\n");
				else{
				 printf("You are not eligible to board\n");
				 return 0;
				 }
				printf("-----------YOU ARE SENIOR CITIZEN SO YOU HAVE BEEN GIVEN PRIORITY---------\n");
				printf ("Airport is assigning you a code\n");
				vc=age%5;
				printf("Your code is= %d",vc);
				if (vc==0)
				printf("Category A");
				else if(vc==1)
				printf("Category B");
				else if(vc==2) 
				printf("Category C");
				else if(vc==3)
				printf("Category D");
				else if(vc==4)
				printf("Category E");
				else printf("No category");
				break;
			case 2:
passengerCategory = 3;
destination = 2;
permittedWeight = 40;
priorityStatus = 2;

				printf("Your destination type is International\n");
				printf("Enter your baggage weight\n");
				scanf("%d",&bagweight);
				printf("Enter Documents are valid or not 1 for valid and 2 for not valid\n");
				scanf("%d",&choice3);
				if(bagweight>40)
				printf("Permitted allowance exceeded\n You have to enhance baggage screening to carry this\n");
				if(choice3==1)
				printf("Documents are valid\n");
				else 
				printf("Not valid\n");
				if(bagweight<=40&&choice3==1)
				printf("You are eligible to board\n");
				else {
				printf("You are not eligible to board\n");
				return 0;
				}
				printf("-----------YOU ARE SENIOR CITIZEN SO YOU HAVE BEEN GIVEN PRIORITY---------\n");
				printf ("Airport is assigning you a code\n");
				vc=age%5;
				printf("Your code is= %d",vc);
				if (vc==0)
				printf("Category A");
				else if(vc==1)
				printf("Category B");
				else if(vc==2) 
				printf("Category C");
				else if(vc==3)
				printf("Category D");
				else if(vc==4)
				printf("Category E");
				else printf("No category");
				break;
		}
		break;
	}
	printf("\n\n\n\n---------- PASSENGER DETAILS ----------\n");
printf("Passenger: ");
if(passengerCategory == 1)
    puts("Adult");
else if(passengerCategory == 2)
    puts("Student");
else
    puts("Senior Citizen");
printf("Destination: ");
if(destination == 1)
    puts("Domestic");
else
    puts("International");
printf("Allowance: %d kg\n",permittedWeight);
printf("Priority: ");
if(priorityStatus == 1)
    puts("No");
else
    puts("Yes");
    return 0;

	}

