//#include<stdio.h>
#include<bits/stdc++.h>

/* Program to print full pyramid using *
					*
				  * * *
				* * * * *
			  * * * * * * *
			* * * * * * * * *
*/

void fullPiramidStr(int row){

	for(int i=1;i<=row;i++){
			int star=0;
			for(int space=1;space<=(row-i);space++){
				printf("  ");
			}
			while (star!=((2*i)-1)) {
				printf("* ");
				star++;

			}
            printf("\n");

	}
}


/* Program to print pyramid using numbers

					1
				  2 3 2
				3 4 5 4 3
			  4 5 6 7 6 5 4
			5 6 7 8 9 8 7 6 5
*/
void fullPiramidNo(int row){
	for(int i=1;i<=row;i++){
			int star=0;
			for(int space=1;space<=(row-i);space++){
				printf("   ");
			}
			int k=i;
			while (star!=i) {
				printf("%d  ",k);
				k++;
				star++;
			}
			if (i>=2){
					int l=k-2;
			  for(int m=1;m<=(i-1);m++){
					printf("%d ",l);
					l--;
					}
			}
			printf("\n");

	}
}


/* Program to print pyramid using numbers

					1
				  2 3 2
				3 4 5 4 3
			  4 5 6 7 6 5 4
			5 6 7 8 9 8 7 6 5
*/
void fullPiramidNoWay2(int row){

   for(int i=1;i<=row;i++){
       int star,count1,count2;
       star=count1=count2=0;

       for(int space=1;space<=(row-i);space++){
            printf("  ");
            count1++;
       }

       while (star != (2*i)-1) {

			if (count1<row){
					printf("%d ",(i+star));
					count1++;

			}else{
				count2++;
				//printf("%d",count2);
                printf("%d ",(i+star)-(2*count2));
			}
			star++;

       }
       printf("\n");
   }


}

/*
Inverted full pyramid using *

		* * * * * * * * *
		  * * * * * * *
			* * * * *
			  * * *
				*
*/

void invertFullPiramidStr(int row){

    for(int i=1;i<=row;i++){
			int count=0;
			for(int space=0;space<(i-1);space++){
				printf("  ");
				count++;
			}
		for(int star=1;star<=((2*row)-(count+i));star++){
				printf("* ");
			}
			printf("\n");

    }
}



void diamond(int n){

/*	for(int i=1; i<=n; i++)
		{
			for(int j=i; j<n; j++)
			{
				printf(" ");
			}
			for(int j=1; j<=(2*i-1); j++)
			{
				printf("*");
			}
			printf("\n");
		}
*/
		//Prints the lower triangle
		for(int i=n; i>=1; i--)
		{
			for(int j=i; j<=n; j++)
			{
				printf(" ");
			}
			for(int j=2; j<(2*i-1); j++)
			{
				printf("*");
			}
			printf("\n");
		}
}

int main(){
	int input=0;
	int count=0;
	printf("\nEnter No of Row:: ");
	scanf("%d",&input);
	printf("\n");
//	fullPiramidStr(input);
//	fullPiramidNo(input);
//	fullPiramidNoWay2(input);

//	invertFullPiramidStr(input);
	diamond(input);







	return 0;

}
