#include<stdio.h>
#include<math.h>

float f(float x)
{
    return exp(-(x*x*x));
}
void main()
{
    float a,b,n,sum=0,i,h;
    printf("Enter the value of a ");
    scanf("%f",&a);

    printf("Enter the value of b ");
    scanf("%f",&b);

    printf("Enter number of steps ");
    scanf("%f",&n);

    h=(b-a)/n;

    sum=f(a)+f(b);

    for(i=a+h;i<b;i=i+h)
    {
        sum=sum+(2*f(i));
    }

    sum=(sum*h)/2;

    printf("\nThe value of the integral if %f",sum);

}