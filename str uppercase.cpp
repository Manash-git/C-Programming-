//#include<stdio.h>
#include<bits/stdc++.h>


int main(){

	char str[100];
	printf("Enter your string : ");
	gets(str);
	puts("Making upper case of your string");
//	delay(20);
	strupr(str);
	puts("Uppercase of your string");
	puts(str);
	return 0;
}
