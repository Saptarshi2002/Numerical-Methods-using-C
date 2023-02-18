#include<stdio.h>

int main()
{
    float x,u,u1,y,a[20][20];
    int i,j,n,fact;

    printf("Enter number of terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the value of X[%d] :",i);
        scanf("%f",&a[i][0]);
        printf("\nEnter the value of Y[%d] :",i);
        scanf("%f",&a[i][1]);
    }

    printf("\nEnter the value of X for which you want to find Y: ");
    scanf("%f",&x);
    
    for(j=2;j<=n;j++)
    {
        for(i=0;i<n-j+1;j++)
            a[i][j]=a[i+1][j-1]-a[i][j-1];
    }

    u=(x-a[0][0])/(a[1][0]-a[0][0]);

    y=a[0][1];
    u1=u;
    fact=1;

    for(i=2;i<=n;i++)
    {
        y=y+(u1*a[0][i])/(float)fact;
        fact=fact*i;
        u1=(u1*(u-(float)(i-1)));
    }

    printf("\nThe value at X=%f is = %f",x,y);
    return 0;

}