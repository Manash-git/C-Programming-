//#include<stdio.h>
#include<conio.h>
#include<bits/stdc++.h>

int main(){

	FILE *file;

	file= fopen("file fputs().txt","w");		// file initialize only write


	if (file==NULL){
		printf(" File doesn't exist.\n");
	}else {
		printf(" File exist and opened.\n");
		char name[100];

		printf(" Enter ur name:: ");
		gets(name);

		fputs(name,file);	// write a string in a file

        printf(" File is written successfully.\n");

		fclose(file);
	}

	getch();
	return 0;
}
