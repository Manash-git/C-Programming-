//

#include<stdio.h>

int main(){
	
	int x,y,z,a,b,c;  x=y=z=a=b=c=0;
	
	printf("\n\t (x=1)&&(y=2)&&(z=3) = %d",(x=1)&&(y=2)&&(z=3));
	printf("\n\t x=%d, y=%d, z=%d ",x,y,z);
	printf("\n\t (a=1)&&b&&(c=3) = %d",(a=1)&&b&&(c=3));
	printf("\n\t a=%d, b=%d, c=%d ",a,b,c);
	return 0;
}
