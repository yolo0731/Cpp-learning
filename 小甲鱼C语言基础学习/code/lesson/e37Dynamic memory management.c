#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int count = 0;
    int *ptr = NULL; // 初始化为空指针
    int num;
    do
    {
        printf("请输入一个整数(输入 -1 表示结束)：");
        scanf("%d", &num);
        count++;

        ptr = (int *)realloc(ptr, count * sizeof(int));
        if (ptr == NULL)
        {
            printf("内存分配失败！\n");
            free(ptr); // 释放原有内存
            exit(1);   // 退出程序
        }
        ptr[count - 1] = num; // 初始化指针可以当作数组使用
    } while (num != -1);

    printf("输入的整数分别是：");
    for (int i = 0; i < count - 1; i++)
    {
        printf("%d ", ptr[i]);
    }
    putchar('\n');

    // 释放内存
    free(ptr);
    ptr = NULL; // 防止悬空指针
    system("pause");
    return 0;
}
