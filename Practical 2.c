// Implementation of Bisection Method.

#include<stdio.h>
#include<conio.h>
#include<math.h>

float F(float x)
{
    return (x*x*x)-x-1;
}

int main()
{
    float a,b,c,d;
    int i=0;

    printf("Enter the Interval (a,b) in which the roots of the equation lies: ");
    scanf("%f %f",&a, &b);
    printf("Enter the Tolerance value: ");
    scanf("%f", &d);

    do{
        c=(a+b)/2;
        ++i;
        if(F(a)*F(b)<0)
        {
            b=c;
            printf("\nThe value of a and b in %d is %f and %f",i,a,b);
        }
        else
        {
            a=c;
            printf("\nThe value of a and b in %d is %f and %f",i,a,b);
        }
    }
    while(fabs(a-b)>d || F(c)==0);
    printf("\nRoots is %f",c);
    printf("\nPress any key to exit");
    getch();
}
