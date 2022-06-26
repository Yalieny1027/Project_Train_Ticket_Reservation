#include <stdio.h>
#include <conio.h>
	char s1[10]="Salem";
	char s2[10]="Namakkal";
	char s3[10]="Chennai";
	char s4[10]="Madurai";
typedef struct passenger{
	char name[30];
	int age;
	char gender[10];
}details;

void book(int n1,int n2){
	FILE *fptr;
	fptr=fopen("Ticket.txt","a+");
	switch(n1){
		case 1:{
			switch(n2){
				
				case 2:{
					printf("The ticket is booked in Salem-Namakkal train");
					fprintf(fptr,"The ticket is booked in Salem-Namakkal train ");
					break;
				}
				case 3:{
					printf("The ticket is booked in Salem-Chennai train");
					fprintf(fptr,"The ticket is booked in Salem-Chennai train");
					break;
				}
				case 4:{
					printf("The ticket is booked in Salem-Madurai train");
					fprintf(fptr,"The ticket is booked in Salem-Madurai train");
					break;
				}
			}
			break;
		}
		case 2:{
			switch(n2){
				case 1:{
					printf("The ticket is booked in Namakkal-Salem train");
					fprintf(fptr,"The ticket is booked in Namakkal-Salem train");
					break;
				}
				case 3:{
					printf("The ticket is booked in Namakkal-Chennai train");
					fprintf(fptr,"The ticket is booked in Namakkal-Chennai train");
					break;
				}
				case 4:{
					printf("The ticket is booked in Namakkal-Madurai train");
					fprintf(fptr,"The ticket is booked in Namakkal-Madurai train");
					break;
				}
			}
			break;
		}
		case 3:{
			switch(n2){
				case 1:{
					printf("The ticket is booked in Chennai-Salem train");
					fprintf(fptr,"The ticket is booked in Chennai-Salem train");
					break;
				}
				case 2:{
					printf("The ticket is booked in Chennai-Namakkal train");
					fprintf(fptr,"The ticket is booked in Chennai-Salem train");
					break;
				}
				case 4:{
					printf("The ticket is booked in Chennai-Madurai train");
					fprintf(fptr,"The ticket is booked in Chennai-Madurai train");
					break;
				}
			}
			break;
		}
		case 4:{
			switch(n2){
				case 1:{
					printf("The ticket is booked in Madurai-Salem train");
					fprintf(fptr,"The ticket is booked in Madurai-Salem train");
					break;
				}
				case 2:{
					printf("The ticket is booked in Madurai-Namakkal train");
					fprintf(fptr,"The ticket is booked in Madurai-Namakkal train");
					break;
				}
				case 3:{
					printf("The ticket is booked in Madurai-Chennai train");
					fprintf(fptr,"The ticket is booked in Madurai-Chennai train");
					break;
				}
			}
			break;
		}
	}

	
}
int main(){
	FILE *fptr;
	fptr=fopen("Ticket.txt","a+");
	system("cls");
	int n1,n2;
	struct passenger temp;
	printf("Enter your name:");
	scanf("%s",&temp.name);
	fprintf(fptr,"%s ",&temp.name);
	printf("Enter your age:");
	scanf("%d",&temp.age);
	fprintf(fptr,"%d ",&temp.age);
	printf("Enter your gender:");
	scanf("%s",&temp.gender);
	fprintf(fptr,"%s ",&temp.gender);
	printf("Book your Train Ticket\n");
	printf("Select the source place\n1.%s\n2.%s\n3.%s\n4.%s\n",&s1,&s2,&s3,&s4);
	scanf("%d",&n1);
	printf("Select the destination place\n1.%s\n2.%s\n3.%s\n4.%s\n",&s1,&s2,&s3,&s4);
	scanf("%d",&n2);
	if(n1==n2){
	    	printf("Not possible");
	    	exit(0);
		}
	else{
		book(n1,n2);
	}
	return 0;
}
/*Train ticket booking system
List sources and destinations.
Provide option to book ticket by selecting source and destination places.
*/
