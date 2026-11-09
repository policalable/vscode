#include <stdio.h>
int fun(int n)
{
int i=2;
int j=0;
while(i<n)
{
    if(n%i==0)
    {
        j=j+i;
    }
    i++;
}
return j;
}
int main()
{   
    int n;
    printf("please enter the number:");
    scanf("%d",&n);
    printf("s=%d\n",fun(n));
}