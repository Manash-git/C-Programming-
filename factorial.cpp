//#include<stdio.h>
#include<bits/stdc++.h>

long int fact(int n){
	
	if(n<=1)
		return 1;
	else
		return (n*fact(n-1));
}
int main()
{
	long int x=0;
	
	x=fact(6);
	printf("\nFactorial is= %ld",x);
    return 0;
}
