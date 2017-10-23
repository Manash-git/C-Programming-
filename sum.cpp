//#include<stdio.h>
#include<bits/stdc++.h>

int main(){
	int a[100];
	printf("\nEnter how many:: ");
	int n=0;
	scanf("%d",&n);

	for (int i=0;i<n ;i++ ){
		printf("\nEnter data a[%d]:: ",i+1);
		scanf("%d",&a[i]);
	}

	 for (int i=0;i<n ;i++ ){
		printf("\nArray data a[%d]:: %d",i+1,a[i]);
	}

	printf("\n\nSum:: ");
	int sum=0;
	for (int i=0;i<n ;i++ ){
		sum=a[i]+sum;

	}
	printf(" %d\n",sum);


	return 0;
}
