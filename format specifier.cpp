//

#include<stdio.h>

int main(){
	
	char *name= "Niton";
	int id= 44;  char grade = 'A';   float gpa = 3.89;
	printf("Name: %s\nId: %d\nGrade: %c\nGPA: %f\n\n\n",name,id,grade,gpa);
	printf("Name: %s\nId: %o\nGrade: %c\nGPA: %E\n\n\n",name,id,grade,gpa);
	printf("Name: %s\nId: %X\nGrade: %c\nGPA: %G\n\n\n",name,id,grade,gpa);
	
	return 0;
}
