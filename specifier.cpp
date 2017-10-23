//

#include<stdio.h>

int main(){
	
	int a,b; a=b=0;
	a=5;
	printf("\n\t%d\t%d\t%d",a,a+10,a);
	b=2;
	printf("\n\t%d\t%d\t%d",b,b=b+10,b);
	return 0;
}
