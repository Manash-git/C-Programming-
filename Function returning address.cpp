/*
	// Function returning address
*/

//#include<stdio.h>
#include<bits/stdc++.h>

// Function Declaration
int *funReturn (int *, int *);

// Main Function
int main(){

	// variable declaration
	int x,y;

	// variable initialization
	x= 20, y= 30;

	// pointer variable declaration
	int *ptrInt ;

	// function call
	ptrInt = funReturn(&x, &y);  // sending address
	printf("\n Bigger value is :: %d\n", *ptrInt);


	return 0;
}

// Function Definition
int *funReturn(int *x, int *y){

	// Compare bigger value
	if (*x>*y){
		return x;

	}else if(*x<*y) {
		return y;
	}
	return x;		// if the value is same

}
















