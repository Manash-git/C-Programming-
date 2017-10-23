#include<bits/stdc++.h>
#include<conio.h>

int main(){
    int n1,n2,rem,GCD,LCM;

    n1=n2=rem=GCD=LCM=0;

    printf(" Enter two numbers.\n");

    printf(" Number1:: ");
    scanf("%d",&n1);

    printf("\n Number2:: ");
    scanf("%d",&n2);

    int temp= n1*n2;
    if (n2>n1){
        n1=n1-n2;
        n2=n1+n2;
        n1=n2-n1;
    }

    while (n2!=0) {

        rem= n1%n2;
        n1=n2;
        n2=rem;
    }

    GCD= n1;
    LCM= temp/GCD;

    printf("\n GCD:: %d\n",GCD);
    printf(" LCM:: %d\n",LCM);

    getch();

}

