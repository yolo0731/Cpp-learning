#include <stdio.h>
void func()
{
    static int count = 0; // 静态局部变量
    printf("count = %d\n", count);
    count++;
}
int main()
{
    int i;
    // count ++  错误：count是func函数的局部变量，不能在main函数中访问
    for (i = 0; i < 5; i++)
    {
        func(); // 这里每次调用func函数，count的值都会保留，因为count是静态局部变量，直到程序结束才会无,会输出0,1,2,3,4
    }
    getchar();
    return 0;
}