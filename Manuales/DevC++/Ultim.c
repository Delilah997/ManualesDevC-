#include <stdio.h>
#include <stdlib.h>

int main(){
	int x=1, x2=1, x3=1;
	int y=1, y2=1, y3=1;
	
	puts("\nDivisible de 2 y 7");
	while(y<=1000){
		if(x%3==0){
			printf("%d ",x);
		}
		y++;
		x++;
	}

	while(y2<=1000){
		if(x2%2==0&x2&7==0){
			printf("%d ",x2);
		}
		y2++;
		x2++;
	}
	puts("\nDivisible de 7");
	while(y3<=100){
		if(y3%7==0){
		}else{
			printf("%d ",x3);
		}
		y3++;
		x3++;
	}
	puts("Fin del programa");
	system("pause");
	return 0;
}
