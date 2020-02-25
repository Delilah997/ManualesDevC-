#include <stdio.h>
#include <stdlib.h>
int main(){
	double min=60;
	double hr=60;
	double d=24;
	double a=365;
	double edad=22;
	double total= edad*a*d*hr*min;
	
	printf("%f", total);
	
	printf("\n");
	system("pause");
	return 0;
}
