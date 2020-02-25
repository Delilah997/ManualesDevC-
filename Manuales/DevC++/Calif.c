#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int cal;
	
	puts("Ingresa tu calificacion: ");
	scanf("%d",&cal);
	
	if(cal>=8)
	puts("Felicidades, Aprovaste el curso\n");
	puts("Fin del Programa\n");
	
    system("pause");
	return 0;
}
