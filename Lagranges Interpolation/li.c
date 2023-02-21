#include<stdio.h>

void main()
{
    int i,j,n;
    float x[10],y[10],sum=0,term,X;

    printf("Enter number of terms ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the value of X[%d] ",i);
        scanf("%f",&x[i]);

        printf("Enter the value of Y[%d]",i);
        scanf("%f",&y[i]);
    }

    printf("\nEnter the value of x for which you want to find y ");
    scanf("%f",&X);

    for(i=0;i<n;i++)
    {
        term=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
                term=(term*(X-x[j]))/(x[i]-x[j]);
        }
        sum=sum+term*y[i];
    }

    printf("The required value is %f",sum);
    

}