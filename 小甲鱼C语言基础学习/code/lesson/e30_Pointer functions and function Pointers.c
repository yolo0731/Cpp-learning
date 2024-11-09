#include <stdio.h>
#include <windows.h>
int add(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int calc(int (*fp)(int, int), int num1, int num2) // 回调函数
{
    return (*fp)(num1, num2);
}
int (*select1(char op))(int, int)
{
    switch (op)
    {
    case '+':
        return add;
    case '-':
        return sub;
    }
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int num1, num2;
    char op;
    int (*fp)(int, int); // 定义函数指针，指向一个函数，该函数接受两个int参数，返回一个int
    printf("请输入一个式子(如1+3):");
    scanf("%d%c%d", &num1, &op, &num2);
    fp = select1(op); // 调用select1函数
    printf("%d %c %d = %d\n", num1, op, num2, calc(fp, num1, num2));
    system("pause");
    return 0;
}