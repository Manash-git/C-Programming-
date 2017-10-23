//#include<stdio.h>
#include<bits/stdc++.h>

int main(){
	
	char line[50]="This is a simple string";char *p;
	p= strstr(line,"simple");
	strncpy(p,"final",3);
	puts(p);
	return 0;
}
