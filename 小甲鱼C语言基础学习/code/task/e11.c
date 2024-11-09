#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    char a;
    printf("请输入一个字符:\n");
    scanf("%c", &a);
    if (a <= 'Z' && a >= 'A')
    {
        a += 32;
    }
    else if (a >= 'a' && a <= 'z')
    {
        a -= 32;
    }
    printf("%c\n", a);

    system("pause");
    return 0;
}