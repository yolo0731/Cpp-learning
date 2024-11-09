#include <stdio.h>
// 递归实现阶乘函数
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1); // 递归调用自己
    }
}

int main()
{
    int number = 5;
    printf("%d 的阶乘是 %d\n", number, factorial(number));
    return 0;
}
