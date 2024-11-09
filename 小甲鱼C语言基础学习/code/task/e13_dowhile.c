#include <stdio.h>
#include <windows.h>
#include <math.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int ch;
    long long num = 0;
    int is_overflow = 0;
    printf("请输入待转换的字符串：");
    const int max_int = pow(2, sizeof(int) * 8) / 2 - 1;
    const int min_int = pow(2, sizeof(int) * 8) / 2 * -1;

    do
    {
        ch = getchar();

        if (ch >= '0' && ch <= '9')
        {
            num = 10 * num + (ch - '0'); // 将字符转换为数字
            // 每输入一个数字，位数加1，如由十位变为百位，再加上新的个位数字
            if (num > max_int || num < min_int)
            {
                is_overflow = 1;
                break;
            }
        }
        else
        {
            if (num)
            {
                break; // 如果已有数字，则退出整个do while循环
            }
        }

    } while (ch != '\n'); // do while语言后面要加分号
    if (is_overflow)
    {
        printf("溢出\n");
    }
    else
    {
        if (!num)
        {

            printf("没有输入数字\n");
        }
        else
        {
            printf("数字是：%d\n", num);
        }
    }

    system("pause");
    return 0;
}