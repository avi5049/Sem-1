//Electricity bill according to unit charges


#include <stdio.h>

void main (){
	int unit,bill;
	printf("Enter unit of electricity bill:");
	scanf("%d",&unit);
	
	if(unit<=50){
		bill=(unit*0.50);
	}
	
	else if(unit<=150){
		bill=(50*0.50)+((unit-50)*0.75);
	}
	
	else if(unit<=250){
		bill=(50*0.50)+(100*0.75)+((unit-150)*1.20);
	}
	
	else if(unit>250){
		bill=(50*0.50)+(100*0.75)+(100*1.20)+((unit-250)*1.50);
	}
	
	bill=bill+(bill*0.20);
	printf("Total amount of bill is %d",bill);
	
}

