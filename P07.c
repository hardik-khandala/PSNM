#include <stdio.h>
#include <conio.h>
#include <math.h>
#define f(x) 1 / (1 + x * x)
int main()
{
    float a, b, h, s1=0, s2=0, simp;
    int i, n;

    printf("Limit of the integration are: \n");
    scanf("%f %f",&a,&b);
    printf("Number of the divisons is: \n");
    scanf("%d", &n);

    h=(b-a)/n;

    for(i=1;i<n/2;i++)
    {
        s1=s1+f(a+2*i*h);
    }
    for(i=1;i<=n/2;i++)
    {
        s2=s2+f(a+(2*i-1)*h);
    }

    simp=h*(f(a)+f(b)+2*s1+4*s2)/3;
    printf("The value of integral is: %f", simp);

    return 0;
}
