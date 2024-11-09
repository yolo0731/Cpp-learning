#include <stdio.h>
#include <windows.h>
int main()
{
    int i = 0;
    while (i < 100)
    {
        if (i % 2)
        {
            continue; // 跳过循环体后面的语句，继续下一次循环,下面的i++不会执行
        }
        i++;
    }
    printf("i=%d\n", i);
    system("pause");
    return 0;
}
/*逗号运算符的工作方式如下：
依次计算从左到右的所有表达式。
所有子表达式都会执行，但整个逗号表达式的值为最后一个子表达式的值。
如 a=1；b=2；result = (a++, b++); 输出结果为 result = 2, a=2, b=3;
*/
