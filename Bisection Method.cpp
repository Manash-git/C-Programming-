//#include<stdio.h>
#include<bits/stdc++.h>
//#include<math.h>

float eqn(float x)
{
    return x*x-4*x-10;
}
int main()
{
    float a,b,x;
    int k=1;

    printf("Enter the value of lower bound and upper bound:\n");
    scanf("%f %f",&a,&b);

    while(fabs(a-b)>0.0001){
            x=(a+b)/2;
            printf("\nValue of a and b in %d iteration is %f and %f\n",k,a,b);
            if(eqn(a)*eqn(x)<0)
              {
                b=x;
                printf("Root is %f\n ",x);
              }
             else if(eqn(b)*eqn(x)<0)
               {
                 a=x;
                 printf("Root is %f\n ",x);
               }
               else
               {
                   printf("Error");
               }
            k++;
    }

     printf("\n App. Root is %0.4f\n ",x);

    return 0;

}
