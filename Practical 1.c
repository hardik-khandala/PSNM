// Find out Quadratic equation roots using C.

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float d=0, r1=0, r2=0;

    printf("Enter value of A\n");
    scanf("%d", &a);
    printf("Enter value of B\n");
    scanf("%d", &b);
    printf("Enter value of C\n");
    scanf("%d", &c);
    printf("Equation: %dx^2+%dx+%d\n",a,b,c);

    d=(b*b)-(4*a*c);
    printf("Value of D is = %.2f \n", d);

    if(d>=0)
    {
        printf("The roots are read and distinct \n");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("The roots are %.2f and %.2f",r1,r2);
    }
    else
    {
        printf("The roots are complex \n");
    }
    return 0;
}
