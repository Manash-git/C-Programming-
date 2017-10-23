//#include<stdio.h>
#include<bits/stdc++.h>


void arrayInput(int a[],int n){
	printf("\nEnter Input:: ");
	printf("\n---------------------\n");
	for(int i=0 ; i<n; i++){
		printf("\nIndex [%d]:: ",i+1);
	    scanf("%d",&a[i]);
	}
	printf("\n");
}

void arrayPrint(int a[], int n){
	printf("\nArray is :: ");
	for(int i=0 ; i<n; i++){

	    printf("%d ",a[i]);
	}
	printf("\n");
}

void insertionSort(int ar[],int n){

	for(int index=1 ; index<n; index++){

        int indexValue= ar[index];
        int previousIndex= index-1;

        while ( ar[previousIndex]> indexValue && previousIndex >= 0 ) {

            ar[previousIndex+1]= ar[previousIndex];
            previousIndex--;


        }

    ar[previousIndex+1 ] = indexValue;
	}
}


/*
void merge(int ar[],int start, int mid, int end){

	int leftarray[100],rightarray[100];

	int n1= mid-1+start;
	int n2= end-mid;
	int i,j,k; i=j=k=0;
	for(i=0 ; i<n1; i++){
		leftarray[i]= ar[start+i];
	}
	for( j=0 ; j<n2; j++){
	    rightarray[j]=ar[mid+1+j];
	}

	i=j=0;
	k=start;
	while (i<n1 && j<n2) {

		if (leftarray[i]<= rightarray[j]){
			ar[k]=leftarray[i];
			i++;
		}else {
			ar[k]=rightarray[j];
			j++;
		}
		k++;
	}
	 while (i < n1)
    {
        ar[k] = leftarray[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there
     //  are any
    while (j < n2)
    {
        ar[k] = rightarray[j];
        j++;
        k++;
    }
}



void mergeSort (int ar[],int start, int end){


	int mid=0;

	if (start<end){

	    mid= (start+end)/2;
		mergeSort(ar,start,mid);
		mergeSort(ar,mid+1,end);
		merge(ar,start,mid,end);

	}

}

*/


int main(){

	int ar[100];
	int n=0;

	printf("\nEnter How Many Number You Want:: ");
	scanf("%d",&n);

	arrayInput(ar,n);
	arrayPrint(ar,n);
	insertionSort(ar,n);

//    mergeSort(ar,0, n);

	arrayPrint(ar,n);


	return 0;
}
