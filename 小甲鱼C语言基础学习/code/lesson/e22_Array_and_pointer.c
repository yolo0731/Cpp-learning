#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int a;
    int *p = &a;
    scanf("%d", p); // 引用存放在指针p中的地址，不需要&符号
    char str[100];
    scanf("%s", str); // 字符串数组名也是地址
    printf("str的地址是:%p\n", str);
    printf("str的地址是:%p\n", &str[0]); // 数组名就是数组的首地址

    int b[5] = {1, 2, 3, 4, 5};
    printf("b[0] -> %p, b[1] -> %p, b[2] -> %p\n", &b[0], &b[1], &b[2]); // 数组每个元素之间的地址差是该类型的大小

    char c[] = "FishC";
    char *f = c;
    printf("*f = %c, *(f+1) = %c\n", *f, *(f + 1)); // 编译器会自动考虑元素的大小。对于char类型数组，f + 1实际上会将f的地址偏移 3 * sizeof(char)个字节，以指向数组的第2个元素位置
    system("pause");
    return 0;
}