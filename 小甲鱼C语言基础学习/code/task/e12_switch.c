#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int a, b;
    char ch;
    printf("请输入式子: ");
    scanf("%d %c %d", &a, &ch, &b);
    /* %d会自动跳过空格，找到第一个数字开始读取
    在%d和%c之间的空格告诉scanf要跳过所有空格字符，直到遇到下一个非空字符
    如果没有在格式字符串中放置空格，%c会读取输入中的下一个字符，包括空格、换行等*/

    // scanf()函数返回值为成功读取的数据项个数,到输入结束符或读取发生错误时，scanf()返回EOF，通常值为-1

    switch (ch)
    {
    case '+':
        printf("%d%c%d=%.2f\n", a, ch, b, (float)a + b);
        break;
    case '-':
        printf("%d%c%d=%.2f\n", a, ch, b, (float)a - b);
        break;
    case '*':
        printf("%d%c%d=%.2f\n", a, ch, b, (float)a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("除数不能为0\n");
        }
        else
        {
            printf("%d%c%d=%.2f\n", a, ch, b, (float)a / b);
        }
        break;
    }
    system("pause");
    return 0;
}
