#include <stdio.h>
#include <windows.h>
#define MAX 256
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int i = 0;
    char ch;                   // ch对应ASCII码
    int char_count[256] = {0}; // 数组大小为 256，对应 ASCII 字符的范围
    char str[MAX];
    int total_char = 0;
    int unqiue_char = 0;
    int max_char = 0;
    int max_count = 0;
    printf("请输入英文文本:");
    while ((ch = getchar()) != '\n')
    {
        str[i++] = ch;
        if (i == MAX - 1)
        {
            break;
        }
        total_char++;
        char_count[ch]++;
    }
    str[i] = '\0';
    for (i = 0; i < MAX; i++)
    {
        if (char_count[i] > 0)
        {
            unqiue_char++;
            if (char_count[i] > max_count)
            {
                max_count = char_count[i];
                max_char = i;
            }
        }
    }
    printf("总字符数为：%d\n", total_char);
    printf("不同字符数为：%d\n", unqiue_char);
    printf("出现次数最多的字符是：\"%c\", 出现次数为：%d\n", max_char, max_count);
    system("pause");
    return 0;
}