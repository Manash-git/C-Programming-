//#include<stdio.h>
#include<bits/stdc++.h>

int main(){
	
	int *p,num;
	p=&num;
	*p=100;
	
	printf("%d",num); 
	(*p)++;
	printf("\n%d",num);
	(*p)--;
	printf("\n%d",num);
	return 0;
}
