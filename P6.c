//Implement Trapezoidal Method

#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) 1/(1+(x*x))

void main()
{
    float a,b,h,s=0,tr;
    int i,n;
    
    printf("Limit of the integration are\n");
    scanf("%f%f",&a,&b);
    printf("Number of divisions is \n");
    scanf("%d",&n);

    h=(b-a)/n;

    for(i=1;i<=n;i++)

    s=s+f(a+i*h);
    tr=h*(f(a)+f(b)+2*s)/2;
    printf("The value of integral is=%f",tr);
    getch();
}
