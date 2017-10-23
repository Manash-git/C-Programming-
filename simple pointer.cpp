//#include<stdio.h>
#include<bits/stdc++.h>

int main(){
	
	int balance,*address, value;
	balance=5000;
	address=&balance;
	value= *address;
	printf("%d",value);
	printf("\n%d",balance);
	return 0;
}
