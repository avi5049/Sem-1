/*In digital world colors are specified in RGB format, with values of R, G, and B varying on integer scale from 
0 to 255. Colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format with values of C, M, Y and K 
varying on a real scale from 0.0 to 1.0. Convert RGB color to CMYK as per formula:
- White=Max(red/255,green/255,blue/255)
- Cyan=(white - red/255)/white
- Magenta=(white - green/255)/white
- Yellow=(white - blue/255)/white
- Black=1 - white
Note: if RGB values are all 0, then the CMY values are all 0 and the K value is 1.*/


#include <stdio.h>

void main (){
	int R,G,B;
	float C,M,Y,K,W,Max,R1,G1,B1;
	
	printf("Enter the value of R,G,B: ");
	scanf("%d %d %d",&R,&G,&B);
	
	R1=R/255; G1=G/255; B1=B/255;
	
	if(R1>B1 && R1>G1){
		Max=R1;
	}
	
	else if(B1>R1 && B1>G1){
		Max=B1;
	}

	else if(G1>R1 && G1>B1){
		Max=G1;
	}
	
	W=Max;
	C=(W-R1)/W;
	M=(W-G1)/W;
	Y=(W-B1)/W;
	K=1-W;
	
	printf("White = %f\nCyan = %f\nMagenta = %f\nYellow = %f\nBlack = %f",W,C,M,Y,K);
	
}

