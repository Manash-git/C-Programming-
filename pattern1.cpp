//#include<stdio.h>
#include<bits/stdc++.h>
/*
			   1
			  12
			 123
			1234
			 123
			  12
			   1

*/
int main(){
	int n=0;
	printf(" Enter Number:: ");
	scanf("%d",&n);
	printf(" \n");

	for(int row=1 ; row<=n; row++){
	    for(int col=1 ; col<=n-row; col++){
			printf(" ");
	    }
	    for(int col=1 ; col<=row; col++){
			printf("%d",col);
	    }
        printf("\n");
	}

	for(int row=n-1 ; row>=1; row--){
	    for(int col=1 ; col<=n-row; col++){
			printf(" ");
	    }
	    for(int col=1 ; col<=row; col++){
			printf("%d",col);
	    }
        printf("\n");
	}

	//printf(" Test\n");
	return 0;
}
