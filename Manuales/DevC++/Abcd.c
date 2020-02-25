#include <stdio.h>
#include <stdlib.h>

int main(){
	
	A=[3,5,6,8,4,7,8,5,3,1];
	B=[3,4,6,8,9,1,2,3,0,9];
	
//	int c[5];
	//c[0]=A[3] mod (B[2]/2);
	//c[1]=B[A[1]]-A[9];
	//c[2]=A[0]+A[1+2];
	//c[3]=A[5]+B[5];
	//c[4]=(A[3]/B[2])/2;
	
	printf("OP 1: ", A[3] mod (B[2]/2));
	printf("OP 2: ", B[A[1]]-A[9] );
	
	printf("Fin del programa");
	system("pause");
	return 0;
}
