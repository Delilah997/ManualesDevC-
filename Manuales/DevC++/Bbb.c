#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("******AND******\n");
	printf("true&&true : %d\n", (1&&1));
	printf("true&&false : %d\n", (1&&0));
	printf("false&&false : %d\n", (0&&1));
	printf("true&&true : %d\n", (0&&0));
	
	printf("******OR******\n");
	printf("true||true : %d\n", (1||1));
	printf("true||false : %d\n", (1||0));
	printf("false||false : %d\n", (0||1));
	printf("true||true : %d\n", (0||0));
	
	printf("******XOR******\n");
	printf("true^true : %d\n", (1^1));
	printf("true^false : %d\n", (1^0));
	printf("false^false : %d\n", (0^1));
	printf("true^true : %d\n", (0^0));
	
	system("pause");
	return 0;
}
