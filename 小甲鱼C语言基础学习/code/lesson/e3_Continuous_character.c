#include <stdio.h>
#include <windows.h>
int main()
{
    print\
f("\n\
                     *\n\
                    ***\n\
                  *******\n\
                ************ \n\
                ");
    system("pause"); // \n表示换行，后面的\表示连续符，相当于下一行是上一行的延续,也空用在函数里面，如上面的print\f，但用于函数连接时第二行顶头不能有空格
}