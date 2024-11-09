#include <stdio.h>
#include <windows.h>
#define MAX 1024

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    char str1[2 * MAX]; // 确保连接后不越界
    char str2[MAX];

    char *target1 = str1;
    char *target2 = str2;

    printf("请输入第一个字符串：");
    fgets(str1, MAX, stdin);
    // fgets(str, MAX, stdin)的意思是从标准输入(stdin，通常是键盘输入)中读取最多 MAX-1个字符,并将这些字符存储到str中
    // fgets 会将换行符也作为输入的一部分保存到str中,它会在读取的字符串后面自动添加字符串终止符\0

    printf("请输入第二格字符串：");
    fgets(str2, MAX, stdin);

    while (*target1++ != '\0') // 将指针指向 str1 的末尾处
        ;

    target1 -= 2; // 我们希望 str1 最后边的 '\0' 和 '\n' 都被覆盖掉

    // 连接字符串
    while ((*target1++ = *target2++) != '\0') // 先赋值，指针再分别移动到下一个字符位置，在比较是否为'\0'
        ;

    printf("连接后的结果是：%s", str1);
    system("pause");
    return 0;
}