#include <stdio.h>
#include <math.h>
// 题目要求编写的函数
long fun(long s, long t)
{
    /**********Program**********/
    int i = 1;  // 记录当前是第几位，从个位开始算（个位是第1位）
    long k = 1; // 记录当前数字需要乘的权重（1, 10, 100...）
    t = 0;      // 初始化结果变量 t

    while (s > 0) {
        if (i % 2 != 0) { // 如果当前是奇数位
            // 取出当前最低位数字，乘上对应的权重，加到 t 中
            t = t + (s % 10) * k; 
            // 权重扩大10倍，为下一个奇数位做准备
            k = k * 10;           
        }
        s = s / 10; // 将 s 的最低位去掉，准备处理下一位
        i++;        // 位数计数器加1
    }
    /********** End **********/
    
    return t;
}

// 题目给定的主函数（补全了 int 返回类型）
int main()
{
    long s, t = 0, m;
    printf("\nPlease enter s:");
    scanf("%ld", &s);
    
    m = fun(s, t);
    
    printf("The result is: %ld\n", m);
    
    return 0;
}

