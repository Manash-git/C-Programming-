//#include<stdio.h>
#include<bits/stdc++.h>

int main(){
	
	char s[100];
	int i;	
	printf("Enter a string:\t");
	gets(s);
	for(i=0;s[i]!='\0';++i);
	printf("\n Length of the strings: %d",i);
	return 0;
}
