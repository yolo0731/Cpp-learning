#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 第一种写法:
    char name[3];
    name[0] = 'c';
    name[1] = 'z';
    name[2] = 'r';
    name[3] = '\0'; // 必须要有结束符
    printf("我的名字是%s\n", name);
    // 第二种写法:
    char a[] = {'c', 'z', 'r', '\0'};
    printf("我的名字是%s\n", a);
    // 第三种写法:
    char b[] = "czr";
    printf("我的名字是%s\n", b); // 字符串常量不用手动加结束符
    system("pause");
    return 0;
}