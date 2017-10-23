//#include<stdio.h>
#include<bits/stdc++.h>

int main(){
	
	char c[100],ch;
	int i,count=0;
	
	puts("Enter a string: ");
	gets(c);
	printf("\nEnter a chracter to find frequency: ");
	scanf("%c",&ch);
	
	for(i=0;c[i]!='\0';++i){
		if(ch==c[i]){
			++count;
		}
	}
	printf("\nFrequency of %c = %d",ch,count);
	return 0;
}
