//#include<stdio.h>
#include<bits/stdc++.h>

int main(){
	
	char *arr[]={"dha","khu","raj",'\0'};
	for(int n=0;n<3;n++){
		printf("City name %d is : %s\n",n+1,arr[n]);
	}
	return 0;
}
