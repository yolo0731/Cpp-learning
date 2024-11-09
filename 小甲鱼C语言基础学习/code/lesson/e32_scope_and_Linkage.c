#include <stdio.h>
void myFunction()
{
    int x = 10; // x 的作用域是整个 myFunction 函数内部
    if (x > 5)
    {
        int y = 20; // y 的作用域是 if 语句块内部
    }
    // printf("%d", y);  // 错误：y 只能在 if 语句块内访问
}
