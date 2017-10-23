//

#include<stdio.h>

int main(){
	
	int x=25, y= 7;
	
	printf("\n\tx mod y= %d\n",x%y);
	printf("\n\tx mod -y= %d\n",x%(-y));
	printf("\n\t-x mod y= %d\n",(-x)%y);
	printf("\n\t-x mod -y= %d\n",(-x)%(-y));
	return 0;
}
