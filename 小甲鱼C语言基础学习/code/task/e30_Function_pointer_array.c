#include <stdio.h>

// 加法函数
double add(double a, double b)
{
    return a + b;
}

// 减法函数
double sub(double a, double b)
{
    return a - b;
}

// 乘法函数
double mul(double a, double b)
{
    return a * b;
}

// 除法函数
double divi(double a, double b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("错误: 除数不能为零！\n");
        return 0;
    }
}

int main()
{
    double num1, num2;
    double (*operations[4])(double, double) = {add, sub, mul, divi}; // 定义函数指针数组，指向四个函数

    // 获取用户输入的两个数字
    printf("请输入第一个数字: ");
    scanf("%lf", &num1);
    printf("请输入第二个数字: ");
    scanf("%lf", &num2);

    // 通过函数指针数组调用加减乘除函数
    printf("\n加法结果: %.2lf\n", operations[0](num1, num2));
    printf("减法结果: %.2lf\n", operations[1](num1, num2));
    printf("乘法结果: %.2lf\n", operations[2](num1, num2));
    if (num2 != 0)
    {
        printf("除法结果: %.2lf\n", operations[3](num1, num2));
    }
    getchar();
    return 0;
}
