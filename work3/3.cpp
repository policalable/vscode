#include <stdio.h>
int fun(int m)
{
    int i,k;
    for(i=m+1; ;i++)
    {
        for(k=2;k<i;k++)
        {
            if(i%k==0)
                break;
        }
        if(k>=i)
            {return i;}
    }
  }
int main()
{
int m;
printf("Enter m: ");
scanf("%d", &m);
printf("\nThe result is %d\n", fun(m));
}