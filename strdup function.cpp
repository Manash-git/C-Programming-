 //#include<stdio.h>
#include<bits/stdc++.h>

int main(){

	char name[20], *duplicate;
//	char *name="Manash",*duplicate;
//	char *name;char *duplicate;
	puts("Enter duplicate :");
	gets(name);
//        scanf("%s",&name);
	duplicate = strdup(name);
//	printf("%s",duplicate);
//	free(duplicate);
	puts(duplicate);
// char *p1 = "Raja";
  //  char *p2;
    //p2 = strdup(p1);
//
  //  printf("Duplicated string is : %s", p2);
	return 0;
}
