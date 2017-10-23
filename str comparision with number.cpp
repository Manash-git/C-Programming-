//#include<stdio.h>
#include<bits/stdc++.h>

int main(){
	char s1[20]="Home computing";	
	char s2[20]="Home computings";	
	

	int x;
	x= strcmp(s1,s2);
	printf("%d\n\n",x);

// ""strncmp"" mane ""strcmp"" ar vitor akta extra n ache	

	if(strncmp(s1, s2,15)==0){
		printf("Two strings are equal");
	}else{
		printf("Two strings different");
	}
	return 0;
}
