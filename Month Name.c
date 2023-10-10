//Number of Days in a Month

#include <stdio.h>

void main (){
	int a;
	printf("Enter a number between 1 to 12: ");
	scanf("%d",&a);
	
	if(a<12 && a>0){
		
	switch(a){
		case 4:
		case 6:
		case 9: printf("It have 30 days");
			break;
		case 2: printf("It have 28 days");
			break;
		default: printf("It have 31 days");
			break;
		}
	}
	
	else{
		printf ("Please enter a valid number");
	}
	}
	
	



