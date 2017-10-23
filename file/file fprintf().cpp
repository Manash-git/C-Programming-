//#include<stdio.h>
#include<conio.h>
#include<bits/stdc++.h>

int main(){

	FILE *file;

	file= fopen("file fprintf().txt","a");		// file initialize append


	if (file==NULL){
		printf(" File doesn't exist.\n");
	}else {
		printf(" File exist and opened.\n");
		char name[100];
		int age=0;

		printf(" Enter ur name:: ");
		gets(name);

		printf("\n Enter ur age :: ");
		scanf("%d",&age);

		fprintf(file," Name:: %s \t Age :: %d \n",name,age);

        printf(" File is written successfully.\n");

		fclose(file);
	}

	getch();
	return 0;
}
