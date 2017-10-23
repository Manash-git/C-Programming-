/*
	// How many word in a line / sentence.
*/

//#include<stdio.h>
#include<bits/stdc++.h>

// Function Declaration


// Main Function
int main(){

	// variable declaration
	char str[1000];
	int count;

	// variable initialization
	count=0;

	// input sentence
	printf("\n Enter your sentence :: ");
	gets(str);

	// calculate no of words
	for(int i=0 ; str[i]!='\0'; i++){
		if (str[i]!=' ' && str[i]!='\t'){

			count++;
			while(str[i]!=' ' && str[i]!='\t'){
			i++;
		}

		}


	}

	// print no of words in a line.
	printf(" No of Words:: %d\n",count);

	return 0;
}

// Function Definition
