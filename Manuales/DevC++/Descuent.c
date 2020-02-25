#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int desc1=10;
	int desc2=20;
	int cliente, z=0;
	
	z=(cliente)?desc2:desc1;
	printf("El descuento es de %d % \n",z);
	
	puts("Fin del programa");
	
	system("pause");
	return 0;
}
