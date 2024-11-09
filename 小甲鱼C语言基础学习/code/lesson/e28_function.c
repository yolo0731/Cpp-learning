#include <stdio.h>
#include <windows.h>
int max_value(int x, int y) // 函数定义
{
    return x > y ? x : y;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int a, b, c;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);
    c = max_value(a, b);
    printf("最大值是：%d\n", c);
    system("pause");
    return 0;
}
