#include <stdio.h>
#include <conio.h>
#include <math.h>
#define f(x) 1 / (1 + x * x)

int main()
{
    float lower, upper, integration = 0.0, stepSize, k;
    int i, n;
    printf("Enter limit of integration: \n");
    scanf("%f %f", &lower, &upper);
    printf("Enter number of sub intervals: \n");
    scanf("%d", &n);

    stepSize = (upper - lower) / n;

    integration = f(lower) + f(upper);
    for (i = 1; i <= n - 1; i++)
    {
        k = lower + i * stepSize;
        if (i % 3 == 0)
        {
            integration = integration + 2 * f(k);
        }
        else
        {
            integration = integration + 3 * f(k);
        }
    }
    integration = integration * stepSize * 3 / 8;
    printf("value of integration is: %.3f", integration);
    return 0;
}