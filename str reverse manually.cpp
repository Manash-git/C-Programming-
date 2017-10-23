//#include<stdio.h>
#include<bits/stdc++.h>

int main(){
	
	char a[100],temp=0;
	int i,j;
	i=j=0;
	printf("Enter a string : ");
	gets(a);
	
	j=strlen(a)-1;
	
	while(i<j){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;j--;
	}
	printf("\nReverse string is : ");
	puts(a);
	return 0;
}
