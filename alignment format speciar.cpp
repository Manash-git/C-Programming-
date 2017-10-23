//

#include<stdio.h>

int main(){
	int a=5, b= 55, c= 555;
	printf("%3d %3d %3d",a,b,c);
	printf("\n\n%3d %3d %3d\n\n\n",c,a,b);
	
	printf("%-3d %-3d %-3d\n",a,b,c);
	printf("\n\n%-3d %-3d %-3d",c,a,b);
	return 0;
}
