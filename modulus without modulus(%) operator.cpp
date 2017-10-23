/*
	// Finding modulus without modulus(%) operator
*/

//#include<stdio.h>
#include<bits/stdc++.h>




// Main Function
int main(){

	// variable declaration
	int x,n,q,p,m;

	// variable initialization
	x= 27, n=5, p=q=m=0;

	// print using % oparator for verification
	printf(" %d Mod %d = %d\n",x,n,(x%n));

	// calculation
    q= x/n;
    p= q*n;
    m= x-p;

    // print after manual calculation
    printf(" After calculation :: %d Mod %d = %d\n",x,n,m);


	return 0;
}

