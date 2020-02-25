#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int anios, sueldo;
	int x;
	
	puts("Ingresa los años: ");
	scanf("%d",&anios);
	puts("Ingresa tu sueldo: ");
	scanf("%d",&sueldo);
	x =(sueldo*100)/10;
	
	if(anios>=5){
		if(x>=1000){
			puts("Eres acredor a un credito hipotecario");
		}
	}
	
	puts("Fin del programa");
	
	system("pause");
	return 0;
}
