//

#include<stdio.h>

int main(){
	
	int ch='N'; int x=1, y=2, z=3;
	
	printf("\n\t%d",x&&y&&z);
	printf("\n\t%d",x<y&&y>z);
	printf("\n\t%d",('A'<=ch)&&(ch<='Z'));
	printf("\n\t%d",(x=0)&&(y=4));
	return 0;
}
