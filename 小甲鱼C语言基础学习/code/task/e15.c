#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int ch;
    printf("请输入明文:");

    while ((ch = getchar()) != 'n')
    {
        if (ch >= 'a' && ch <= 'z')
        {
            putchar('a' + (ch - 'a' + 3) % 26);
            continue;
        }
        if (ch >= 'A' && ch <= 'Z')
        {
            putchar('A' + (ch - 'A' + 3) % 26);
            continue;
        }
    }
    putchar('\n');
    system("pause");
    return 0;
}
