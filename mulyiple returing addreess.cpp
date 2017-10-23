/*
	// Multiple returning address
*/

//#include<stdio.h>
#include<bits/stdc++.h>

#define PI 22/7

// Function Declaration
void cylinder (float r, float h, float *csa, float *tsa, float *vol);

// Main Function
int main(){

	// variable declaration
	float r,h,csa,tsa,vol;			// csa = curved surfaced area, tsa = total surface area, vol= volume, r= radius, h= height

	// variable initialization
	r=h=csa=tsa=vol=0;

	// take input of radius and height
	printf("\n Enter Radious :: ");		scanf("%f",&r);
	printf("\n Enter Height  :: ");		scanf("%f",&h);
	printf(" \n");

	// function call
    cylinder(r,h,&csa,&tsa,&vol);

    // print result after calculation
    printf(" Curved surfaced area :: %f\n",csa);
    printf(" Total  surfaced area :: %f\n",tsa);
    printf(" \tVolume \t :: %f\n",vol);

	return 0;
}

// Function Definition
void cylinder(float r, float h, float* csa, float* tsa, float* vol){

    *csa= 2*PI*r*h;
    *tsa= 2*PI*r*(h+r);
    *vol= PI*r*r*h;
}














