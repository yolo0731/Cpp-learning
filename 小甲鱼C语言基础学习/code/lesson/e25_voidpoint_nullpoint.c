#include <stdio.h>
int main()
{
    // void 指针可以指向任何类型的数据,及任何类型的指针都可以赋值给void 指针
    int num = 1024;
    int *pi = &num;
    char *ps = "FishC";
    void *pv;
    pv = ps;
    printf(" *ps = %s\n", (char *)pv); // 通过强制类型转换，将 void 指针转换为 char 指针

    // NULL 指针是一个定义在标准库中的值为零的常量，用来表示指针不指向任何东西
    int *p1;
    int *p2 = NULL;
    printf("p1 = %p\n", p1); // 野指针，指向一个不确定的内存地址
    printf("p2 = %p\n", p2); // NULL 指针，指向空地址
    getchar();
    return 0;
}