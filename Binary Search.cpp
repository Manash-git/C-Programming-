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
		printf("\nArray data is:: ");
	 for (int i=0;i<n ;i++ ){
		printf(" %d ",a[i]);
	}

	printf("\n\nEnter the value you want :: ");
	int search=0;
	int flag=0;
	scanf("%d",&search);



	int low=1; int high=n;
	int mid=0;
	while (low<=high){
		mid=(low+high)/2;

		if(a[mid]==search){

			printf("\n %d Found.",search);

			break;
		}else if (a[mid]<search){
			low=mid+1;
			printf("\n %d Found",search);
			break;

		}else{
			high=mid-1;
			printf("\n %d Found.",search);
			break;
		}


	}






	return 0;
}
