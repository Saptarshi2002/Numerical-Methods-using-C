#include<stdio.h>
#include<math.h>

float f(float x)
{
    return x*x*x -2*x -5;
}

int main()
{
    int i=0,j=1;
    float x1,x2,x3,x,e;

  
        printf("Enter the value of X1 ");
        scanf("%f",&x1);
        printf("Enter the value of x2 ");
        scanf("%f",&x2);

    
    printf("\nEnter accuracy ");
    scanf("%f",&e);

    x=(x1+x2)/2;

    while(1)
    {
            printf("\n iteration %d  Root = %.4f",j,x);
            
            if(f(x)*f(x1)<0)
                x2=x;
            
            else if(f(x)*f(x2)<0)
                x1=x;
            
            x3= (x1+x2)/2;

            if(fabs(x3-x)<e)
                break;
            
            x=x3;
            j++;
    }
    }