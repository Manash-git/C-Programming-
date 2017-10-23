//#include<stdio.h>
#include<bits/stdc++.h>

/* Program to print half pyramid using *
		*
		* *
		* * *
		* * * *
		* * * * *
		* * * * * *
*/
void halfPiramid(int row){

	for(int i=1;i<=row;i++){
	    for(int j=1;j<=i;j++){
	        printf("* ");
	    }
	    printf("\n");
	}
}

/*  Program to print half pyramid a using numbers

				1
				1 2
				1 2 3
				1 2 3 4
				1 2 3 4 5
*/

void halfPiramidNo(int row){

	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",j);

			}
	    printf("\n");
	}
}

/* Program to print half pyramid using alphabets
			A
			B B
			C C C
			D D D D
			E E E E E
*/


void halfPiramidAlph(int row){
	char ch='A';
	for(int i=1;i<=row;i++){

	    for(int j=1;j<=i;j++){
	        printf("%c ",ch);
		//	ch++;
	    }
		ch++;
		printf("\n");

	}
}

/*Inverted half pyramid using *

			* * * * *
			* * * *
			* * *
			* *
			*
*/


void invertHalfPiraminStr(int row){

	for(int i=1;i<=row;i++){
		for(int j=row;j>=i;j--){
			printf("* ");

		}
		printf("\n");
	}
}


/* Inverted half pyramid using numbers

			1 2 3 4 5
			1 2 3 4
			1 2 3
			1 2
			1
*/

void invertHalfPiraminNo(int row){

	for(int i=row;i>=1;i--){
		for(int j=1;j<=i;j++){
			printf("%d ",j);

		}
		printf("\n");
	}
}


int main(){

	int input=0;
	printf("\nEnter Row no:: ");
	scanf("%d",&input);
	printf("\n");
	halfPiramid(input);
	printf("\n");
	halfPiramidNo(input);
	printf("\n");
	halfPiramidAlph(input);
	printf("\n");
	invertHalfPiraminStr(input);
	printf("\n");
	invertHalfPiraminNo(input);
	return 0;
}
