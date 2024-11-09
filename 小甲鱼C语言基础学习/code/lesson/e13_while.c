#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    printf("请输入一行英文句子:");
    int ch; // 用 int 类型来声明的，而不是 char 类型，这是因为 getchar()函数的返回类型为int
    // 它不仅返回读取到的字符的ASCII值，还可能返回一个特殊的值EOF(通常定义-1)，用于表示输入的结束或错误,
    // 有些char类型的范围有限不能表示EOF
    // 对于没有预先确定执行次数的循环，应该使用while语句
    while ((ch = getchar()) != '\n') // 当输入回车时结束循环,while()里的值为真时执行循环体
    {
        if (ch >= 65 && ch <= 90)
        {
            ch = ch + 32;
        }
        else if (ch >= 97 && ch <= 122)
        {
            ch = ch - 32;
        }

        putchar(ch); // putchar()函数用于输出一个字符，等同于printf("%c",ch)
    }
    putchar('\n');
    system("pause");
    return 0;
}