//multiplication and Division using bitwise

#include <stdio.h>

void main (){
	int a,c,r;
	
	printf("Enter the value of a and b: ");
	scanf("%d",&a);
	
	printf("Enter valid choice \n1.Multiplication 2.Division");
	scanf("%d",&c);
	
	if(c==1){
		r=a<<1;
	}
	 else if (c==2){
	 	r=a>>1;
	 }
	 else{
	 	printf("Enter a valid choice.");
	 }
	 
	 printf("Answer is %d",r);
}


