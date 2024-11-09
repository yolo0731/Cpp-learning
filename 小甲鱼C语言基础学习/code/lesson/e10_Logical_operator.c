#include <stdio.h>
#include <windows.h>
int main()
{
    int a = 3;
    int b = 3;
    printf("%d\n", 3 > 1 && 1 < 2);  // 与门
    printf("%d\n", 3 + 1 || 2 == 0); // 或门
    printf("%d\n", !(a + b));        // 非门 0为假，非0为真
    (a = 0) && (b = 5);              // 逻辑与，前面a=0为假，不执行后面的赋值操作,0赋值给a，b的值不变
    printf("a=%d,b=%d\n", a, b);     // a=0,b=3
    (a = 1) || (b = 5);              // 逻辑或，前面a=1为真，就不执行后面的赋值操作,1赋值给a，b的值不变
    printf("a=%d,b=%d\n", a, b);     // a=1,b=3
    system("pause");                 // 运算符优先级：加减乘除>关系运算符(大于小于)>逻辑运算符>赋值运算符
    return 0;
}