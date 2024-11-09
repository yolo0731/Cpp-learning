#include <stdio.h>
#include <windows.h>
#include <math.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int a;
    double b;
    printf("请输入一个整数:");
    scanf("%d", &a);
    b = pow(a, 5);
    printf("%d的五次方是:%.2f\n", a, b);
    system("pause");
    return 0;
}