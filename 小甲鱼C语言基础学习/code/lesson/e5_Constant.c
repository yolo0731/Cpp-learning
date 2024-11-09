#include <stdio.h>
#include <windows.h>
#define NAME "czr" // define格式为#define 标识符 值，标识符一般用大写
#define YEAR 2001  // 宏只是简单的文本替换，直接将标识符替换为常量，如#define F(n) 2*n，宏F(3+2)实际上会被替换为2*3+2
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    printf("我的名字是%s,我出生在%d年\n", NAME, YEAR);   // %s用于代替字符串变量
    printf("我的名字是%s,我出生\0在%d年\n", NAME, YEAR); // \0表示字符串结束符,默认在字符串的最后，但是可以在字符串中间，但是后面的字符不会被输出
    system("pause");
    return 0;
}