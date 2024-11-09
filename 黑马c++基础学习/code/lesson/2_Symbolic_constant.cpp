#include "iostream"
// #include "windows.h"
using namespace std;
#define FAT_BMI 28
/*符号常量是标识符，符合字母，数字，下划线组合且不可是数字开头
 *如使用英文字母，应全部大写
 * #define 名称（标识符） 常量值/字符串/表达式/代码块，符号定义在代码头部
不需要分号结尾*/
#define J2C_RATE 4.19
/*中文变成乱码的解决方式
方式1：引入windows.h库，在main函数中写SetConsoleOutputCP(CP_UTF8);
方式2：在main函数中写代码 system("chcp 65001");
*/
int main()
{
    // SetConsoleOutputCP(CP_UTF8);
    // system("chcp 65001");
    // 使用符号常量，直接用它的名字即可
    cout << FAT_BMI << endl;
    cout << "焦耳转卡路里需要除以:" << J2C_RATE << endl;
    system("pause");
    return 0;
}
