#include<stdio.h>
//#include<bits/stdc++.h>

int main(){
	
	int x=10;
	char c='A';
	
	int *x1;
	char *c1;
	
	x1=&c;
	printf("%c",*x1);
	
	return 0;
}
