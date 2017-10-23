/*
	// string length calculation and print
	** strlen() :: used to length calculation. => string.h
*/

//#include<stdio.h>
#include<bits/stdc++.h>



// Main Function
int main(){

	// variable declaration
	char str[100];


	// variable initialization

	// input
	printf(" Enter a string :: ");
	gets(str);

	// length print
	printf("\n Length::  %d\n\n", strlen(str));

	// print string according to index
	for(int i=0 ; i<=strlen(str); i++){
	    printf(" str[%d] :: %c\n",i,str[i]);
	}


	return 0;
}

// Function Definition
