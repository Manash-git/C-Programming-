/*
	// Reverse a String and check weather it is palindrome or not.
	## Palindrome :: If we read a string from reverse side it will look same, which is called palindrome.
	** Example:: madam  rev:: madam, 101 rev :: 101
*/

//#include<stdio.h>
#include<bits/stdc++.h>

// Function Declaration


// Main Function
int main(){

	// variable declaration
	char str[100], temp;
	int begin, end;

	// variable initialization
	temp='\0';
	begin=0;

	// Taking string input
	printf(" Enter a string:: ");
	gets(str);
	puts("");

	// copy str to a new string variable to check palindrome
	char rev[100];
	strcpy(rev,str);

	// reverse calculation
	end= strlen(str)-1;  // '\0' is not needed to reverse

	while (begin<end) {

        temp= str[begin];
        str[begin]= str[end];
        str[end]= temp;
        begin++;
        end--;
	}


	// print the reverse string
	printf(" After reversing :: %s\n\n",str);

	// check palindrome
	if (strcmp(rev,str)==0){
	    puts(" It is a Palindrome.");
	}else {
		puts(" It isn't a Palindrome.");
	}

	return 0;
}

// Function Definition
