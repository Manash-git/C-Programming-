//#include<stdio.h>
#include<bits/stdc++.h>
#include<conio.h>

int main(){

	int n=0;

	printf(" Enter Number::");
	scanf("%d",&n);
	printf(" \n");


	for(int row=1 ; row<=n; row++){

		for(int col=1 ; col<=n-row; col++){
			printf(" ");
		}

		for(int col=1 ; col<=(2*row)-1; col++){
			printf("*");
		}
		printf("\n");
	}

	for(int row=n-1 ; row>=1; row--){

		for(int col=1 ; col<=n-row; col++){
			printf(" ");
		}

		for(int col=1 ; col<=(2*row)-1; col++){
			printf("*");
		}
		printf("\n");
	}

	getch();
	return 0;
}
