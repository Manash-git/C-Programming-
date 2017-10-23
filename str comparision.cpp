//#include<stdio.h>
#include<bits/stdc++.h>

int main(){
	
//	char s1[20]="BegineersBook";
//	char s1[20]="BegineersBook.com";
	char s1[20]="Home computing";	
	char s2[20]="Home computings";	
	

	int x;
	x= strcmp(s1,s2);
	printf("%d\n\n",x);
	
	if(strcmp(s1, s2)==0){
		printf("Two strings are equal");
	}else{
		printf("Two strings different");
	}
	return 0;
}
