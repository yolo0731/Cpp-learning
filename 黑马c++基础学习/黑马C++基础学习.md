黑马cpp第1章 1-24讲                      [黑马C++](https://www.bilibili.com/video/BV1et411b73Z?spm_id_from=333.788.videopod.episodes&vd_source=25cfb81d952e6f96fcc47d02e16b46fd&p=24)

---
# 黑马C++课程学习

## 第一节 字符常量
```cpp title:"Character"
#include <iostream> // C++标准输入输出库
#include <windows.h> // 调用windows系统函数，如下面的Setconsole
using namespace std; // 作用是告诉编译器，之后的代码可以省略 std::前缀，直接使用库函数或类，但也有可能引入命名冲突的风险，在大型项目或头文件中更推荐显式地使用 std::前缀来避免冲突
SetConsoleOutputCP(CP_UTF8); // 设置输出编码为UTF-8
cout <<  << endl; //表示输出,中间可以是实行、浮点型、字符、字符串
// 默认字符使用char来声明，占1个字节
// 字符串"ccc"由4个字符组成:'c','c','c','\0'。每个字符占用 1 个字节
```

## 第二节 标识符
```cpp title:"Symbolic_constant"
#define FAT_BMI 28
/* 符号常量是标识符，符合字母，数字，下划线组合且不可是数字开头
 *如使用英文字母，应全部大写
 * #define 名称（标识符） 常量值/字符串/表达式/代码块，符号定义在代码头部
不需要分号结尾
#define 一般用于全局定义，使用符号常量，直接用它的名字即可*/

/*中文变成乱码的解决方式
方式1：引入windows.h库，在main函数中写SetConsoleOutputCP(CP_UTF8);
方式2：在main函数中写代码 system("chcp 65001");
*/
```

## 第三节 变量
```cpp title:"Variables"
/*1. 变量的声明（定义），变量类型 变量名
  如使用英文字母，不应全部大写*/
  int age;      // 整型的变量  4字节
  float height; // 实型的变量声明 4字节
  char gender;  // 字符型变量声明 1字节
  string name;  // 字符串型变量声明 32字节
// 2. 变量的赋值，变量名 = 变量值
// 3. 变量的使用（取值），直接使用变量名称即可
	cout << "age = " << age << endl;
```

## 第四节 变量特征
```cpp title:"Characteristics of variables"
  // 变量值可以修改,类型不能变
  // 进行数学计算,可以用:+ - * /
   /*除了int，整型的声明还有 short（2字节 取值范围:-2^15——2^15-1)
    int (4字节 取值范围:-2^31——2^31-1)
    long (windows为4字节，32位Linux为4字节，64位Linux为8字节）
    long long (8字节 取值范围：-2^63——2^63-1)
    long double (12字节)
    一个字节8bit，有符号类型取值范围：-2^(n-1) ~ 2^(n-1) -1;
    无符号（unsigned）取值范围：0 ~ 2^n-1;  -1是因为包含了一个符号位  n表示bit数  */
    // siezof()运算符，用法：sizeof(数据)，会告知得到数据所占用的字节
    // 无符号的int、short、long有快捷写法
```

## 第五节 快速定义
```cpp title:"Quick definition"
// 形式1：声明变量的同时进行赋值。 变量类型 变量名 = 变量值；
    int age = 21;
    string name = "小明";
// 形式2：一次定义多个变量。 变量类型 变量名，变量名字，....;
    int a, b, c;
    a = 10;
    b = 20;
    c = 30;
// 形式3：一次性声明（定义）多个变量的同时进行赋值
    int d = 40, e = 50, f = 60;
    u_short num4 = 100; // 等同于 unsigned short
```

## 第六节 浮点数类型
```cpp title:"Float date type"
/* 浮点数意思是数值的小数点可以“浮动”，即可以在数值的任意位置。
    浮点型数据没有无符号版本
    float单精度浮点数，4字节，6~7位的有效位数
    double双精度浮点数，8字节，15~16位的有效位数
    long double多精度浮点数，12字节，18~19位的有效位数
    有效数字：整数位、小数点、小数位 */
    float num1 = 1234567890;                  // 只提供了前7位的准确输出
    float num2 = 1.234567890;                 // 只提供7位的准确输出
    double num3 = 1234567890.1234567890;      // 提供16位的准确输出
    long double num4 = 1234567890.1234567890; // 在vscode中只有16位的准确输出
    cout << fixed;
    cout.width(20); // 设置显示的最大宽度（最大位数）
```

## 第七节 常量类型确定
```cpp title:"Determination of constant types"
// 不带有后缀的数字的类型确定，整数的类型最小(默认)是int，小数的类型最小是double
// U无符号的意思, 10U是对10进行unsigned int定义
// L是long的意思 LL是long long类型，UL是 unsigned long类型
// F float的意思
// D double的意思
```

## 第八节 字符数据类型
```cpp title:"Character data type"
	/*char类型本质上是数字，通过ASCII表进行的映射
     *char可以存储的范围是超过ASCII表的，但是基于ASCII表映射
     *可以认为，char应用内容就是ASCII表
     *char一字节 范围-128~127，unsigned char范围 0~255 */
     char ch = 65; // A对应65
     char ch2 = 'a'; // a对应97
     // 大写字母对应的ASCII值第6位置1则变成对应的小写字母。例如大写字母A的二进制值是0100 0001,对应的小写字母a的二进制则是0110 0001,即大小写字母的ASCII码相差32
     // 数字 0~9 对应的十六进制 ASCII 值分别是 30~39
```

## 第九节 转义字符
```cpp title:"Escape character"
  //转义字符：将普通的字符使用\作为开头，将其含义进行转换，对照得到ASCII表的控制字符功能
  //   \n 换行  \t 制表符 \\ 表示一个反斜杠本身 \' 表示单引号 \"表示算双引号
  //   \t制表符演示，类似于编程软件里键盘TAB键，一个\t可以补充到8个字符位
  //    打印\或单引号或者双引号,用\\ \' \" 来反向转义
```

## 第十节 字符串数据类型
```cpp title:"String Datatype"
 // C 语言风格的字符串
    char s1[] = "itheima";     // 字符数组的形式，不能直接修改字
	const char *s2 = "itcast"; // 使用 const char*，表示字符串常量是不可修改的

 // C++ 语言风格字符串
    std::string s2 = "itcast"; // C++ string 类型的字符串
```

## 第十一节 字符串连接
```cpp title:"String concatenation"
	string name = "小黑";
    string major = "物理";
    int age = 21;
    float height = 172.5;
     string msg = "我是" + name + "专业是" + major + "年龄是" + to_string(age) + "身高是" + to_string(height);
     //多个字符串拼接位一个字符串只需要使用+号连接
     //to_string() 函数：可以将内容转化为字符串类型，用法：to_string(内容)
```

## 第十二节 布尔数据类型
```cpp title:"Bool datetype"
 // 布尔：bool 字面量仅仅有2个：true或false
    bool flag = true;   // true 表示真，本质是数字1
    bool flag2 = false; // false 表示假，本质是数字0
```

## 第十三节 Cin输入
```cpp title:"Cin"
/* 通过cin可以接受键盘数据的录入，提供给运行的程序
     cin会自动识别接受数据的变量类型，完成类型适配
     给cin输入后才会进行下一步         */
    int num;
    cout << "请输入一个整型数字: " << endl;
    cin >> num;
```

## 第十四节 算数运算符
```cpp title:"Arithmetic operator"
// 单目（只有1个操作数） 操作符 + 、-
    int num1 = +10; //+表示正数
// 双目（有2个操作数）操作符：+、-、*、/、%
	int num6 = 10 / 3; // /相除,如果两个操作数都是整数，是整除结果
    int num7 = 10 % 3; // % 取余,必须要求整数类型
// 单目操作符： ++、--
    int a = 2;
    int b = ++a; // 前置递增（+1），在赋值语句（=）之前，先执行对a加1操作
    int c = 2;
    int d = c++; // 后置递增，在赋值语句之“后”，再执行对c加1的操作
    
```

## 第十五节 赋值运算符
```cpp title:"Assignment operator"
 // += 、 -= 、 *= 、 /= 、 %= ,赋值运算符是将变量和常量进行操作后再赋值给变量
 // 例如 %=，将变量本身进行取余操作，将结果再次赋值变量本身
    num %= 3; // 等同于num = num % 3；
```

## 第十六节 比较运算符
```cpp title:"Comparison operator"
#include "cstring" //c语言字符串库，能调用strcmp函数
    // ==相等  ！=不等 <小于 >大于 <=小于等于  >=大于等于
    // 0 false 假   1 true 真
    cout << "3 < 5 :" << (3 < 5) << endl; 
    // (内容)表示对内容进行bool计算得到的值传递给cout

// 字符串的比较
    // C语言风格的字符串 char s[] char s* ，用strcmp()比较
    // C语言风格字符串 直接应用比较运算符，比较的是内存地址，而不是内容
    // strcmp 比较的是字符串内首个不同字符的ASCII值，若第一个字符相同，比较第二个，依次向后
    // strcmp进行比较，0 相等  -1表示s1<s2,即前面的小于后面的,1表示s1>s2
    char s1[] = "hello";
    const char *s2 = "hello";
    cout << "s1 == s2?" << strcmp(s1, s2) << endl;
    cout << "字符串字面量c是否大于a " << strcmp("c", "a") << endl;
    // C++风格字符串， string类型的都是C++风格字符串
    // 在比较中只要有1个C++风格字符串 就可以用比较字符串了,输出1或0
    // 这种运算符也是基于每个字符的ASCII值，逐字符比较，直到出现不同的字符
    string s3 = "a"; // C++风格
    char s4[] = "b"; // C语言风格
    cout << "s3是否等于s4 " << (s3 == s4) << endl; 
```

## 第十七节 逻辑运算符
```cpp title:"Logical operator"
// !：非运算符 &&与门，两个条件都要同时为true(真)结果为真，否则只要有一个假，结果就为假
// ||或门，只要有一个真结果就为真
// &&与门，两个条件都要同时为true(真)结果为真，否则只要有一个假，结果就为假
```

## 第十八节 三元运算符
```cpp title:"Ternary operator"
//  三元运算符格式： 表达式 ? v1 : v2;
//  通过?判断表达式是真还是假， 真的话对外提供结果是v1，假的话提供v2
string value = num1 > num2 ? "num1不小于num2" : "num1不大于num2";
```


---
