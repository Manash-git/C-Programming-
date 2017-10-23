//

#include<stdio.h>

int main(){
	
	int n=0;
	printf("\n\t please enter a integer number : ");
	
	scanf("%d",&n);
	
	if((n%2)!=0)
	printf("\n\t\a You entered an Odd number");
	else
	printf("\n\t\a You entered an Even number");
	
	return 0;
}
