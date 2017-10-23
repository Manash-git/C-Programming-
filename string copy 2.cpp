//#include<stdio.h>
#include<bits/stdc++.h>

int main(){
	
	char string[] = "october";
	printf("the size of %s is %d and the length is %d\n\n", string, sizeof(string), strlen(string));
    strcpy(string, "september");

    printf("the size of %s is %d and the length is %d\n\n", string, sizeof(string), strlen(string));
	return 0;
}
