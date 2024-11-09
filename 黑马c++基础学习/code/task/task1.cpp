#include "iostream"
#include "windows.h"
using namespace std;
#define NAME "周杰伦"
#define AGE 21
#define HEIGHT 180.5
#define WEIGHT 56
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    cout << "我是" << NAME << ",今年" << AGE << "岁。" << endl;
    cout << "身高" << HEIGHT << "cm,体重" << WEIGHT << "KG。" << endl;
    system("pause");
    return 0;
}
