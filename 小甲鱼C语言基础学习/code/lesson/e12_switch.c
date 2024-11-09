#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    char ch;
    printf("请输入成绩等级\n");
    scanf("%c", &ch);
    switch (ch) // switch语句只能判断整型,字符型和枚举类型，不能判断浮点型
    {
    case 'A':
        printf("你的成绩在90分以上\n");
        break;
    case 'B':
        printf("你的成绩在80-89分之间\n");
        break;
    case 'C':
        printf("你的成绩在70-79分之间\n");
        break;
    case 'D':
        printf("你的成绩在60-69分之间\n");
        break;
    case 'E':
        printf("你的成绩在60分以下\n");
        break;
    default:
        printf("输入错误\n");
        break;
    }
    system("pause");
    return 0;
}