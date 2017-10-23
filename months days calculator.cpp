//

#include<stdio.h>

int main(){
	
	int months,days;
	printf("\n\tEnter number of days :");
	scanf("%d",&days);
	
	months=days/30;
	days= days % 30;
	
	printf("\n\n\t Number of months = %d \t days = %d\n",months,days);
	return 0;
}
