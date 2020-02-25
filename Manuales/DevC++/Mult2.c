#include <stdio.h>
#include <stdlib.h>
int main(){
	int x=2, y=2;
	
	while(y<=100){
		printf("%d, ",x);
		printf("%d, ",x*x);
		y++;
		x++;
	}
	printf("%d, \n",x*y);
	puts("Fin del programa");
	
	system("pause");
	return 0;
}
