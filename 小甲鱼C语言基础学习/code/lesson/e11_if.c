#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int a;
    printf("请输入分数:\n");
    scanf("%d", &a);
    if (a >= 90) // if语句可以嵌套
    {
        printf("你的数学成绩是A\n");
    }
    else if (a >= 80)
    {
        printf("你的数学成绩是B\n");
    }
    else if (a >= 70)
    {
        printf("你的数学成绩是C\n");
    }
    else if (a >= 60)
    {
        printf("你的数学成绩是D\n");
    }
    else
    {
        printf("你的数学成绩是E\n");
    }
    system("pause");
    return 0;
}