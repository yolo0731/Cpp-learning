#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
  SetConsoleOutputCP(CP_UTF8);
  //  三元运算符格式： 表达式? v1 : v2;
  //  通过?判断表达式是真还是假， 真的话对外提供结果是v1，假的话提供v2
  int num1, num2;
  cout << "请输入num1的值:" << endl;
  cin >> num1;
  cout << "请输入num2的值:" << endl;
  cin >> num2;

  string value = num1 > num2 ? "num1不小于num2" : "num1不大于num2";
  cout << value << endl;
  system("pause");
  return 0;
}
