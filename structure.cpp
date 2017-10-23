//#include<stdio.h>
#include<bits/stdc++.h>

struct student{
	char name[100],dept[20];
	float cgpa; int id;
}manash;
//manash={"Manash","CSE",3.96,7245};

int main(){
	
	printf("Enter student details : ");
	printf("\nstudent name : "); scanf("%s",&manash.name);
	printf("\nstudent ID : "); scanf("%d",&manash.id);
	printf("\nstudent DEPT : "); scanf("%s",&manash.dept);
	printf("\nstudent Cgpa : "); scanf("%f",&manash.cgpa);
//gets(manash.name);
//gets(manash.dept);	
	printf("\nstudent name : "); printf("%s",manash.name);
//puts(manash.name);
//puts(manash.dept);
	printf("\nstudent ID : "); printf("%d",manash.id);
	printf("\nstudent DEPT : "); printf("%s",manash.dept);
	printf("\nstudent Cgpa : "); printf("%f",manash.cgpa);
	

	return 0;
}
