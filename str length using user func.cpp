//#include<stdio.h>
#include<bits/stdc++.h>

int string_length(char s[]) {
   int c = 0;
 
   while (s[c] != '\0')
      c++;
 
   return c;
}
   
int main(){
	
	char s[1000];
   int length;
 
   printf("Input a string\n");
   gets(s);
 
   length = string_length(s);
 
   printf("Length of \"%s\" = %d\n", s, length);
 

	return 0;
}
