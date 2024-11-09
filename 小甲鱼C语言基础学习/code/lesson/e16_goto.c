#include <stdio.h>
#include <windows.h>
#include <math.h>
int main()
{
    int b = -2;
    int i = 5;
    while (i++)
    {
        if (i > 10)
        {
            goto A; // 跳转到标签A,一般不要用goto，会使程序难以理解和维护
            // goto语句可以跳转到同一函数内的任何位置，但是不能跳转到另一个函数内
            // goto语句只有在面临很多层循环，要从最里面那层跳到最外边可以使用，因为break只能跳出一层循环
        }
    }
A:               // 标签
    b = fabs(b); // fabs()函数返回b的绝对值
    printf("Here, i = %d,b = %d\n", i, b);
    system("pause");
    return 0;
}
// 判断质数的方法：如果m不能被2 ~ sqrt(m)间任一整数整除，那么 m 必定是素数