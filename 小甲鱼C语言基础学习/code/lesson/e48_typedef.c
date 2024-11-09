#include <stdio.h>
typedef int *INTEGER;
typedef int P;
int main()
{
    P a = 10, b = 20;
    INTEGER p1, p2; // typedef 可以同时定义多个变量
    p1 = &a;
    p2 = &b;
    printf("a=%d,b=%d\n", *p1, *p2);
    getchar();
    return 0;
}
