//#include<stdio.h>
#include<bits/stdc++.h>

int main(){
	
	char a[100],b[100];
	printf("Enter 1st string : ");
	gets(a);
	printf("Enter 2nd string : ");
	gets(b);
	int i,j;
	for(i=0;a[i]!='\0';i++);
	for(j=0;b[j]!='\0';j++,i++){
		
		a[i]=b[j];
	}
	
	a[i]='\0';
	printf("\n\tAfter concatanation : %s",a);
	return 0;
}
