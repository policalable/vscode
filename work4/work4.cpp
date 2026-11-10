#include <stdio.h>
double fun(int m)
{
double sum=0.0,j=1.0;
int i;
for(i=1.0;i<=m;i++)
{
    j=j*i;
    if(i%2==0)
    {
        sum=sum+1.0/j;
    }
}
return sum;
}
int main(void)
{
int n;
printf("Enter n: ");
scanf("%d", &n);
printf("\nThe result is %lf\n", fun(n));
}