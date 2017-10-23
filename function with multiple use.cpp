//#include<stdio.h>
#include<bits/stdc++.h>

void manash(int no){
	
	int n,sum=0;
	for(n=0;n<=no;n++)
		sum+=n;
	printf("Sum of all the number are : %d\n",sum);
}

int main(){
	
	manash(500);
	manash(100);
	manash(60);
	manash(30);
	return 0;
}
