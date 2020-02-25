#include <stdio.h>
#include <stdlib.h>

int main(){
	int hrs, sueldo;
	int total;
	
	puts("Ingresa las horas trabajadas: ");
	scanf("%d",&hrs);
	puts("Ingresa sueldo por hora: ");
	scanf("%d",&sueldo);
	
	if(hrs<=40){
		total=(sueldo*hrs);
	}else{
		total=(40*sueldo+(sueldo*1.5*(hrs-40)));
	}
	printf("El sueldo es de: %d\n",total);
	
	system("pause");
	return 0;
}
