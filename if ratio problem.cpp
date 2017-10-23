//

#include<stdio.h>



int main(){
	
	int p,q,r,s;  p=q=r=s=0;
	float ratio;
	printf("\n\t Enter four integer separeted by space : ");
	scanf("%d %d %d %d",&p,&q,&r,&s);
	
	if ((r-s)==0){
		printf("\n\t Ratio is infinity, because (r-s) = 0");
		//exit(0);
				
	}
	ratio = (float)(p+q)/(r-s);
	
	printf("\n\t Ratio is %.2f",ratio);
	return 0;
}
