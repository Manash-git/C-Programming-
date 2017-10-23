//#include<stdio.h>
#include<bits/stdc++.h>

int main(){
	
	char str1[]={"Bangladesh is a bogus country"};
	char str2[]={"USA lol beautifull country"};
	
	strcpy(str1+16,str2+8);
	puts(str1);
	strcat(str1," = right xD");
	puts(str1);
	return 0;
}
