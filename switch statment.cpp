//

#include<stdio.h>

int main(){
	
	int score,grade;
	printf("\tEnter your score:");
	scanf("%d",&score);
	grade= score/10;
	
	switch(grade){
		case 10:
		case 9:
			printf("\n\tYour grade is A");
			break;
		case 8:
			printf("\n\tYour grade is B");
			break;
		case 7:
			printf("\n\tYour grade is C");
			break;
		case 6:
			printf("\n\tYour grade is D");
			break;
		case 5:
			printf("\n\tYour grade is E");
			break;	
		default:
			printf("\n\tYour grade is F");
			break;
	}
	return 0;
}
