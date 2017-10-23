//#include<stdio.h>
#include<bits/stdc++.h>

int main(){
	
	char *city_name[6]={"sylhet",
						"dhaka",
						"barishal",
						"rajshahi",
						"khulna",
						"ctg"};

	int n;
	for(n=0;n<6;n++){
		printf("\nCity name %d is ; %s",n+1,city_name[n]);
	}	
						
	return 0;
}
