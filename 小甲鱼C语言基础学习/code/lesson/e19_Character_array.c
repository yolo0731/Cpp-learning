#include <stdio.h>
#include <windows.h>
#include <string.h> //c语言字符串库，能调用strlen,strcmp,strcpy,strcat函数
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    char str[] = "hello";
    printf("字符串的长度为：%d\n", strlen(str)); // strlen()函数返回字符串的长度,即字符的个数
    // strlen反回值为size_t类型，即unsigned int，两个无符号整型数相减结果也是无符号整型数
    printf("字符串的长度为：%d\n", sizeof(str)); // sizeof()函数返回字符串所占的字节数，包括'\0'

    char str1[] = "Origrinal string";
    char str2[] = "world";
    strcpy(str1, str2); // strcpy()函数将str2复制到str1中
    // 要求str1的长度要大于等于str2的长度，否则会出现内存溢出
    printf("str1=%s\n", str1);

    char str3[] = "To be or not to be";
    char str4[20];
    strncpy(str4, str3, 6); // strncpy()函数将str3的前6个字符复制到str4中
    str4[6] = '\0';         // strncpy()函数不会自动添加'\0'，需要手动添加
    printf("str4=%s\n", str4);

    char str5[] = "hello";
    char str6[] = "world";
    strcat(str5, " ");  // strcat()函数将空格连接到str5的后面,str5发生改变
    strcat(str5, str6); // strcat()函数将str6连接到str5的后面
    printf("str5=%s\n", str5);
    strncat(str5, str6, 3); // strncat()函数将str6的前3个字符连接到str5的后面
    // strncat()函数会自动添加'\0'
    // 拼接字符串时，要保证str5的长度要大于等于str6的长度，否则会出现内存溢出
    printf("str5=%s\n", str5);

    (strcmp(str5, str6) == 0) ? printf("str5和str6相等\n") : printf("str5和str6不相等\n");
    // strcmp()函数比较两个字符串是否相等,相等返回0,前者大返回1,后者大返回-1

    getchar();
    return 0;
}