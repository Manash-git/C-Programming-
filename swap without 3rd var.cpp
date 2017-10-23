/*
	// Swap without using third variable
*/

//#include<stdio.h>
#include<bits/stdc++.h>




// Main Function
int main(){

	// variable declaration
	int x,y;

	// variable initialization
	x= 10 , y= 40;

	// print before swap
	printf(" X= %d \n Y= %d\n\n",x,y);

	// swap
	x= x+y;
	y= x-y;
	x= x-y;

	// print after swap
	printf(" After swpaing :: \n X= %d \n Y= %d\n",x,y);



	return 0;
}

// Function Definition
