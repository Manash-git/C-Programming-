//#include<stdio.h>
#include<bits/stdc++.h>

int main(){
	
	int x, *y;
	x= 1; 
	y= &x;
	
	printf("\tValue of x is : %d\n",x);
	printf("\tValue of y is : %d\n",*y);
	printf("\tAddress of x is : %d\n",&x);
	printf("\tAddress of y is : %d\n\n",y);
	
	printf("\tAddress of x is : %x\n",&x);
	printf("\tAddress of y is : %x\n",y);
	return 0;
}
