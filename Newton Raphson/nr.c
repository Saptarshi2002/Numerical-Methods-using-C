#include<stdio.h>
#include<math.h>

float f(float x)
{
    return x*x*x -2*x -5;
}

float df(float x)
{
    return 3*x*x -2;
}

int main()
{
    int i=0,j=1;
    float x1,x2,x0,x,e;
    
    printf("Enter the value of x1 ");
    scanf("%f",&x1);
    printf("Enter the value of x2 ");
    scanf("%f",&x2);

    printf("\nEnter accuracy ");
    scanf("%f",&e);

    if(fabs(f(x1))<fabs(f(x2)))
        x0=x1;
    else
        x0=x2;

    while(1)
    {
        printf("\nIteration %d Root= %.4f",j,x);
        x =x0-(f(x0)/df(x0));

        if(fabs(x-x0)<e)
            break;
        
        x0=x;
        j++;
    }

    


}