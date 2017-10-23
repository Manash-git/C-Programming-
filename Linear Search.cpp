//#include<stdio.h>
#include<bits/stdc++.h>

int main(){

	int a[100];
	printf("\nEnter how many:: ");
	int n=0;
	scanf("%d",&n);

	for (int i=0;i<n ;i++ ){
		printf("\nEnter data a[%d]:: ",i+1);
		scanf("%d",&a[i]);
	}

	 for (int i=0;i<n ;i++ ){
		printf("\nArray data a[%d]:: %d",i+1,a[i]);
	}

	printf("\n\nEnter the value you want :: ");
	int search=0;
	scanf("%d",&search);
	int count=0;
	for (int i=0;i<n ;i++ )
	    {

	    	if(a[i]==search){
				printf("\n\nFound at position::  [%d]",i+1);
				count++;
	    	}
		}
	//printf("Count:: %d",count);
	if(count==0)
		printf("\n\nNot found\n");



	return 0;
}
