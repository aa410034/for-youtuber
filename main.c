#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	srand(time(NULL));
	a=(rand()%100)-1;
	printf("%d",a);
	return 0;
}
