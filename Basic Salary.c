//Basic Salary with allowance

#include <stdio.h>

void main (){
	float BS,HRA,DA,Sal;
	printf("Enter amount of salary:");
	scanf("%f",&BS);
	
	if(BS<=10000){
		HRA=0.2*BS;
	    DA=0.8*BS;
	    Sal=BS+HRA+DA;
	    printf("Gross Salary is=%f",Sal);
		
	}
	else if(BS<=20000){
		HRA=0.25*BS;
		DA=0.9*BS;
		Sal=BS+HRA+DA;
	    printf("Gross Salary is=%f",Sal);
		
	}
	else if(BS<=30000){
		HRA=0.3*BS;
		DA=0.9*BS;
		Sal=BS+HRA+DA;
	    printf("Gross Salary is=%f",Sal);
	    
	}
	else {
		printf("Please enter a valid amount of salary");
		
	}
}

