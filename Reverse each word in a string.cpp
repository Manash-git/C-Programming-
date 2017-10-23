/*
	// Reverse each word in a string

	** isalnum () ::This function returns non-zero value if c is a digit or a letter, else it returns 0.
					=> ctype.h

	** scanf(" %[^\n] ", &str); ::  read till user press enter.
*/

//#include<stdio.h>
#include<bits/stdc++.h>

// Function Declaration


// Main Function
int main(){

	// variable declaration
	char str[100], temp;
	int i, begin, end , length;

	// variable initialization
	begin=end=length=0;
	temp='\0';

	// input
	printf(" Enter string:: ");
	scanf("%[^\n]",&str);		// read till press enter


	// string length
	length= strlen(str);

	// reversing
	for( i =0 ; i < length; i++){		// travarsing the string

		// check it is not alphabet and number
		// or last 2nd character
		if (!isalnum(str[i]) || (i== length-1)){
            if (i<length-1){
            	end= i-1;

            }else {
            	end= i;		// last 2nd character

            }


		// reversing a word

		while (begin<end) {
		    temp= str[begin];
            str[begin]= str[end];
            str[end]= temp;
            begin++;
            end--;
		}
		begin= i+1;
		}

	}

	// print after job
	printf(" \n");
//	puts(str);
	printf(" %s\n", str);

	return 0;
}

// Function Definition
