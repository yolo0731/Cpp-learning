#include <stdio.h>
#include <windows.h>
int main()
{
    printf("Hello world\b\b\b\b\bFishC\n"); // \b 是转义字符，表示退格  \n表示换行  \r表示回车 \a是响铃 \f换页 \t水平制表跳到下一个Tab位置 \v垂直制表
    printf("FishC.com no \"fish\"\n");      // printf("内容") 内容里的\"输出表示 "
    system("pause");                        //  \\表示斜杠本身，\0为空字符 %%表示输出%
    return 0;
}