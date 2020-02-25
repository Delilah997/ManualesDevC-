#include <stdio.h>
#include <stdlib.h>
int main (){
	
	double uno=1, dos=3, tres=5;
	double cuatro=30, cinco=23;
	double abc;
	
	double one=5, two=2, tree=1;
	double four=4;
	double d, e, f, g;
	
	abc=(uno/dos)+(dos/tres)+(uno/cuatro)/(cinco/cuatro);
	
	printf("El primer resultado es: %4f\n",abc);
	d=(two)-(tree/four);
	e=(tree)+(two/d);
	f=(tree/e);
	g=(one)+(two/f);
	
	printf("El segundo resultado es: %2f\n",g);
	system("pause");
	return 0;
	
}
