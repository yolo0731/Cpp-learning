#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int months = 24; // 两年等于24个月
    long long rabbit_pairs[months];

    // 初始化
    rabbit_pairs[1] = 1; // 第一个月只有一对兔子
    rabbit_pairs[2] = 1; // 第二个月也只有一对兔子

    // 计算兔子对数
    for (int i = 3; i <= months; i++)
    {
        rabbit_pairs[i] = rabbit_pairs[i - 1] + rabbit_pairs[i - 2];
    }

    printf("两年之后可以繁殖的兔子对数为：%lld\n", rabbit_pairs[months]);
    getchar();
    return 0;
}
