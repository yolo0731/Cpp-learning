#include <stdio.h>
#include <windows.h>
#include <math.h> //用于定义pow函数 函数反回为double类型
// 如果要将pow函数的返回值赋值给long double类型的变量，需要强制类型转换，如定义long double b = (long double)pow(a, 5);
// pow(x,y)函数，求x的y次方
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    unsigned long long sum = 0;
    unsigned long long int weight;
    unsigned long long int temp;
    int i;
    for (i = 0; i < 64; i++)
    {
        temp = pow(2, i);
        sum = sum + temp;
    }
    weight = sum / 25000;
    printf("棋盘上有%llu粒麦子\n", sum);
    printf("如果每25000粒麦子为1KG,那应该给%llu粒麦子\n", weight);
    system("pause");
    return 0;
}