//#include<stdio.h>
#include<conio.h>
#include<bits/stdc++.h>

int main(){

	FILE *file;

	//file= fopen("file.txt","w");		// file initialize only write
	file= fopen("file.txt","a");		// file initialize "a" = append means:: write in file with previous text

	if (file==NULL){
		printf(" File doesn't exist.\n");
	}else {
		printf(" File exist and opened.\n");
		//char name[100]="Manash Kumar Mondal";
		char name[100]=" Tom & Jerry";  // for append testing

        for(int i=0 ; i<strlen(name); i++){

            fputc(name[i],file);		// one by one char is written in file
        }
        printf(" File is written successfully.\n");

		fclose(file);
	}

	getch();
	return 0;
}
