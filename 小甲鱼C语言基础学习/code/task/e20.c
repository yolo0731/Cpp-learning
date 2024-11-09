#include <stdio.h>
#include <windows.h>
#include <string.h>
#define num 5
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    char str[num][100];
    int ch, i, j;
    int temp;
    for (i = 0; i < 5; i++)
    {
        printf("请输入%d句话:", i + 1);
        for (j = 0; (ch = getchar()) != '\n'; j++)
        {
            str[i][j] = ch;
        }
        str[i][j] = '\0';
    }
    int max = 0, min = 0;
    printf("你输入了下面%d句话:\n", num);
    for (i = 0; i < num; i++)
    {
        printf("%s\n", str[i]);
        temp = strlen(str[i]);
        min = temp < strlen(str[min]) ? i : min;
        max = temp > strlen(str[max]) ? i : max;
    }
    printf("最长的句子是:%s\n,长度为%lu\n", str[max], (long unsigned)strlen(str[max]));
    printf("最短的句子是:%s\n,长度为%lu\n", str[min], (long unsigned)strlen(str[min]));
    system("pause");
    return 0;
}
