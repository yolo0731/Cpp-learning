#include <stdio.h>
#include <stdarg.h> // 包含可变参数处理的头文件
// 可变参数函数，用于计算任意数量整数的和
#include <windows.h>
int sum(int count, ...) // count表示传入的整数个数
{
    int total = 0;         // 初始化总和变量
    va_list args;          // 定义可变参数列表
    va_start(args, count); // 初始化可变参数列表，将它指向第一个可变参数
    // 遍历所有传入的整数
    for (int i = 0; i < count; i++)
    {
        int num = va_arg(args, int); // 逐个获取整数参数
        total += num;                // 将当前整数加入总和
    }

    va_end(args); // 结束可变参数的处理
    return total; // 返回总和
}
int main()
{
    // 调用 sum 函数，传入不同数量的参数
    printf("Sum of 2, 3, 4: %d\n", sum(3, 2, 3, 4));             // 输出：9
    printf("Sum of 5, 10, 15, 20: %d\n", sum(4, 5, 10, 15, 20)); // 输出：50
    printf("Sum of 1, 2, 3, 4, 5: %d\n", sum(5, 1, 2, 3, 4, 5)); // 输出：15
    system("pause");
    return 0;
}
