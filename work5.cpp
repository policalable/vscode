#include"stdio.h"
//函数功能:求1-3+5-7+…-+n 的值
int fun(int n)
{
int i,s=0,f=1;//i 定义为循环变量，s 为1-3+5-7+…-n 的值
for(i=1;i<=n;i++)
{
    s=s+(f*i);
    f=-f;
}
return s;
}
main()
{
printf("%d",fun(101));
}