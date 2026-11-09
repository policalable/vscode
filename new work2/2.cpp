#include <stdio.h>
float fun(int n)
{
    double a=2.0,b=1.0,m,k,sum=0,t;
    for(m=1;m<=n;m++)
    {
        k=a/b;
        sum=sum+k;
        t=a;
        a=a+b;
        b=t;
    }
    return sum;
}
main()
{
int n;
float y;
printf("please enter the number:");
scanf("%d",&n);
y=fun(n);
printf("y=%f\n",y);
}