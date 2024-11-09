小甲鱼C语言1- 62节(完结）[带你学C带你飞](https://www.bilibili.com/video/BV17s411N78s/?vd_source=25cfb81d952e6f96fcc47d02e16b46fd)
书: C Primer Plus补充知识点

---
# 课程学习
## e2 转义字符
```c title:"Escape character"
#include <stdio.h>   // C标准输入输出库
printf("Hello world\b\b\b\b\bFishC\n"); // \b 是转义字符，表示退格  \n表示换行  \r表示将光标移动到当前行的起始位置 \a是响铃 \f换页 \t水平制表跳到下一个Tab位置 \v垂直制表

printf("Hello\rWorld\n");
上面的代码中，`\r` 将光标移到行首，然后 `World` 会覆盖掉原来的 `Hello`，因此最终的输出为：World

printf("FishC.com no \"fish\"\n");      /* printf("内容") 内容里的\"输出表示 "
   \\表示斜杠本身，\0为空字符 %%表示输出%    */
\0oo 表示一个八进制的字符常量,其中oo是由两位八进制数字组成的值
例如 char ch = '\101'; // 八进制表示，等于十进制的 65，即 'A'
\xhh 表示一个十六进制的字符常量,其中hh是一到两位的十六进制数字
例如 char ch = '\x41'; // 十六进制表示，等于十进制的 65，即 'A'
 ```


## e3 连续字符
```c title:"Continuous character"
       print\f
("\n\

                     *\n\
                    ***\n\
                  *******\n\
                ************ \n\
                ");
    system("pause"); // \n表示换行，后面的\表示连续符，相当于下一行是上一行的延续,也空用在函数里面，如上面的print\f，但用于函数连接时第二行顶头不能有空格
```

## e4 变量
```c title:"Variables"
    printf("我的生日是2024年的%2d\n", a);             // %d表示将后面的变量a作为整型数据转化到字符串中%d这个占位符的位置 %2d表示右对齐，最小宽度为2个字符,不够的用空格补齐
    printf("I love %cish\n", b);                      // %c用于代替字符变量
    printf("圆周率是%.2f\n", c);                      // %.f用于代替浮点型变量，这里的的%.2f表示精确到小数点后两位
    printf("精确到小数点后9位的圆周率是%11.9f\n", d); // %11.9f表示这个浮点数最小宽度占11个字符，如果不写11那输出只控制小数部分的精度，没有对齐效果
    printf("我的名字是%s,我出生在%d年\n", NAME, YEAR);   // %s用于代替字符串变量
```

## e5 常量/宏
```c title:"Constant"
#define 名称（标识符） 常量值/字符串/表达式/代码块
#define S(r) PI *r *r // 定义宏
// 宏只是简单的文本替换，直接将标识符替换为常量，如#define F(n) 2*n，宏F(3+2)实际上会被替换为2*3+2，如果要正常用得define F(n) = (2* (n))
// 结束宏定义：#undef，宏定义只是机械的替代，不能替代函数
printf("我的名字是%s,我出生\0在%d年\n", NAME, YEAR); // \0表示字符串结束符,默认在字符串的最后，但是可以在字符串中间，但是后面的字符不会被输出
```

## e6 数据类型
```c title:"Date type"
printf("int类型的大小为:%d\n", sizeof(int));                   // 4字节   标识符是%d
printf("short int类型的大小为:%d\n", sizeof(short int));      // 2字节   标识符是%hd
printf("long int类型的大小为:%d\n", sizeof(long int));        // 4字节   标识符是%ld
printf("long long 类型的大小为:%d\n", sizeof(long long int));  // 8字节  标识符是%lld
printf("unsigned long long 类型的大小为:%d\n", sizeof(unsigned long long)); // 8字节   标识符是%llu  unsigned后缀变成u
printf("char类型的大小为:%d\n", sizeof(char));              // 1字节   标识符是%c
printf("float类型的大小为:%d\n", sizeof(float));            // 4字节   标识符是%f  %.nf：用来指定小数点后保留n位
printf("double类型的大小为:%d\n", sizeof(double));          // 8字节   标识符是%f
printf("long double类型的大小为:%d\n", sizeof(long double)); // 12字节  标识符是%Lf %10.3Lf：表示最小宽度占10个字符，小数点后保留3位
printf("_Bool类型的大小为:%d\n", sizeof(_Bool));            // 1字节   标识符是%d
size_t 是无符号的整数类型,在 64 位系统上，size_t 通常是的64位
32位系统，size_t 通常是32位，常用于表示内存大小
```

## e7 范围
```c title:"Range"
    signed char i;   // 负数常用补码表示，负数(补码)是其绝对值的二进制取反加1，
    unsigned char j; /* 负数转化为十进制时，比如 1011 1100，那么符号位的权值就应该乘以 -1,比如1011 1100的转化过程-1 * 2^7 + 0 * 2^6 + 1 * 2^5 + 1 * 2^4 + 1 * 2^3 + 1 * 2^2 + 0 * 2^1 + 0 * 2^0 */
    i = 255; // float 4字节,取值范围为1.2E-38 到 3.4E+38 或 -3.4E+38 到 -1.2E-38，(通常只给出绝对值的范围) 有效数字为6~7 位
    j = 255; // double为8字节,取值范围为2.3E-308 到 1.7E+308 有效数字为15~16位
    // long double为12字节，取值范围为3.4E-4932 到 1.1E+4932  有效数字为18~19位(或更多)
    printf("signed char %hhd\n", i);   // 使用 hh 说明其长度 1个字节8位，范围为-128~127, %hhd 输出结果为-128+127=-1
    printf("unsigned char %hhu\n", j); // 范围为0~255，所占长度为255个bit,正号占一个bit
    一个字节可以表示的范围是0x00到0xFF(十六进制)
```

## e8 字符串
```c title:"Character string"
    // 第一种写法:
    char name[3];
    name[0] = 'c';
    name[1] = 'z';
    name[2] = 'r';
    name[3] = '\0'; // 必须要有结束符
    // 第二种写法:
    char a[] = {'c', 'z', 'r', '\0'};
    printf("我的名字是%s\n", a);
    // 第三种写法:
    char b[] = "czr";  //字符数组，长度为4
    printf("我的名字是%s\n", b); // 字符串常量不用手动加结束符
```

## e9 算数运算符
```c title:"Arithmetic operator"
   printf("整型输出:%d\n", 1 + 1.5);     // 无结果,因为1+1.5是浮点型，%d是整型输出
   printf("浮点型输出:%f\n", 1 + 1.5);    // 1+1.5会转化为占字节大的类型，即1.0+1.5=2.5，转化为浮点型
   printf("整型输出:%d\n", 1 + (int)1.5); // 强制类型转换，强制转化使小数1.5转化为整数1（去掉小数部分）
```

## e10 逻辑运算符
```c title:"Logical operator"
    (a = 0) && (b = 5);              // 逻辑与，前面a=0为假，不执行后面的赋值操作,0赋值给a，b的值不变
    (a = 1) || (b = 5);              // 逻辑或，前面a=1为真，就不执行后面的赋值操作,1赋值给a，b的值不变
    // 运算符优先级：加减乘除>关系运算符(大于小于)>逻辑运算符>赋值运算符
```
运算符优先级查询：[运算符优先级表](https://blog.csdn.net/sunshihua12829/article/details/47912123)
## e11 if语句
```c title:"if"
格式：if (a >= 90) // if语句可以嵌套
    {
        printf("你的数学成绩是A\n");
    }
    else if (a >= 80)
    {
        printf("你的数学成绩是B\n");
    }
```

## e12 switch语句
```c title:"switch"
char ch;
switch (ch) // switch语句只能判断整型,字符型和枚举类型，不能判断浮点型
{
case 'A':
        printf("你的成绩在90分以上\n");
        break;
case 'B':
        printf("你的成绩在80-89分之间\n");
        break;
default:
        printf("输入错误\n");
        break;
}
```

## e13 (do)while语句
```c title:"while"
	int ch; // 用 int 类型来声明的，而不是 char 类型，这是因为 getchar()函数的返回类型为int
    // 它不仅返回读取到的字符的ASCII值，还可能返回一个特殊的值EOF(通常定义-1)，用于表示输入的结束或错误,
    // 有些char类型的范围有限不能表示EOF,如unsigned char
    // 对于没有预先确定执行次数的循环，应该使用while语句
    格式: while ((ch = getchar()) != '\n') 
    {
    }
    // 当输入回车时结束循环,while()里的值为真时(非0)，执行循环体
    putchar(ch); // putchar()函数用于输出一个字符，等同于printf("%c",ch)

	do while:执行循环体，然后再判断条件是否满足，决定是否继续循环，格式:
	do
    {
    } while (ch != '\n'); // do while语言后面要加分号
    do while循环中也能进行do while嵌套
```

## e14 for语句
```c title:"for"
	
    for (int i = 1; i <= 9; i++) // for(初始化;条件;增量)
    // i++是先取出i的值，然后在for循环结束之后加1
    // 如int i = 0; while(i++) 则不会执行循环体，因为i取出的值为0，等于while(0),然后再加1
    {
        for (int j = 1; j <= 9; j++) // for循环嵌套
        {
            printf("%d*%d=%-2d ", i, j, i * j); // %-2d表示左对齐，占2位
        }
    }
    for中也能进行for循环以及 if else嵌套
```

## e15 continue语句
```c title:"continue"
   while (i < 100)
    {
        if (i % 2)
        {
            continue; // 跳过循环体后面的语句，继续下一次循环,下面的i++不会执行
        }
        i++;
    }
    /*逗号运算符的工作方式如下：依次计算从左到右的所有表达式。
所有子表达式都会执行，但整个逗号表达式的值为最后一个子表达式的值。
如 a=1；b=2；result = (a++, b++);输出结果为result = 2, a=2, b=3;相当于result = b++;
```

## e16 goto语句
```c title:"goto"
 while (i++)
    {
        if (i > 10)
        {
            goto A; // 跳转到标签A,一般不要用goto，会使程序难以理解和维护
            // goto语句可以跳转到同一函数内的任何位置，但是不能跳转到另一个函数内
            // goto语句只有在面临很多层循环，要从最里面那层跳到最外边可以使用，因为break只能跳出一层循环
        }
    }
A:  // 标签
```

## e17 数组
```c title:"array"
    int a[5] = {1, 2, 3, 4, 5}; // 该数组有5个元素，内存占用4*5个字节
    // a[0]访问第一个元素，若用a[5]访问第六个元素，会报错
    int b[10] = {1, 2, 3};                   // 该数组有10个元素，前三个元素为1,2,3，后面的元素自动初始化为0
    int c[] = {1, 2, 3, 4, 5};               // 编译器会根据初始化的元素个数自动计算数组的大小
    int a[10] = {[3] = 3, [5] = 5, [7] = 7}; // 使用指定初始化器初始化数组元素,如第三个元素为3，未指定的元素自动初始化为0
```

## e19 字符数组
```c title:"Character array"
#include <string.h> //c语言字符串库，能调用strlen,strcmp,strcpy,strcat函数
    printf("字符串的长度为：%d\n", strlen(str)); // strlen()函数返回字符串的长度,即字符的个数
    // strlen反回值为size_t类型，即unsigned int，两个无符号整型数相减结果也是无符号整型数,即使结果本应是负数，编译器也会按照无符号数的规则处理，导致计算出一个意想不到的正数。这种现象称为下溢出
    printf("字符串的长度为：%d\n", sizeof(str)); // sizeof()函数返回字符串所占的字节数，包括'\0'
    strcpy(str1, str2); // strcpy()函数将str2复制到str1中
    // 要求str1的长度要大于等于str2的长度，否则会出现内存溢出
    strncpy(str4, str3, 6); // strncpy()函数将str3的前6个字符复制到str4中
    str4[6] = '\0';         // strncpy()函数不会自动添加'\0'，需要手动添加
    strcat(str5, " ");  // strcat()函数将空格连接到str5的后面,str5发生改变
    strcat(str5, str6); // strcat()函数将str6连接到str5的后面
    strncat(str5, str6, 3); // strncat()函数将str6的前3个字符连接到str5的后面
	// strncat()函数会自动添加'\0'
    // 拼接字符串时，要保证str5的长度要大于等于str6的长度，否则会出现内存溢出
    // strcmp()函数比较两个字符串是否相等,相等返回0,前者大返回1,后者大返回-1
```

## e20 二维数组
```c title:"Two dimension array"
获取二维数组的长度:sizeof(a) / sizeof(a[0][0])  /* 数组占总字节数/单个元素字节大小=元素个数    同理，获取行数int rows = sizeof(a) / sizeof(a[0]);
获取列数int cols = sizeof(a[0]) / sizeof(a[0][0]); */
格式：int a[3][4] = // 行下标为0~2，列下标为0~3
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}}; // 表示一个3行4列的二维数组，只有行数可以省略
    int b[3][4] = {[0][0] = 1, [1][1] = 2, [2][2] = 3}; // 指定数组的某些元素的值,其余元素为0
```

## e21 指针
```c title:"pointer.c"
指针的含义就是内存的地址
指针本身也是一个变量，也有自己的地址
避免访问未初始化的指针
    char a = 'F';
    char *pa = &a; // 获取变量a的地址并存放在指针变量pa中,pa是指向a的指针变量
    printf("a = &c\n", *pa); // 访问指针变量pa中存放的地址的值,用运算符*
    *pa = 'B'; // 通过指针变量pa修改变量a的值,地址不变
    printf("siezof pa = %d\n", sizeof(pa)); // 指针里面存放的是地址,所以大小是4字节，就算指向的类型不同,如一个int一个char，但指针变量的大小是一样的
    printf("the address of a is %p\n", pa); // %p是输出地址的格式，是16进制的
```

## e22 指针和数组
```c title:"Array and point"
//初始化的指针可以当数值使用
	int a;
    int *p = &a;
    scanf("%d", p); // 引用存放在指针p中的地址，不需要&符号
    char str[100];
    scanf("%s", str); // 字符串数组名也是地址
    下面这两个的输出结果是相等的:
    printf("str的地址是:%p\n", str);
    printf("str的地址是:%p\n", &str[0]); // 数组名就是数组的首地址
    数组每个元素之间的地址差是该类型的大小，如int类型的话数组每各一位地址就差4，但要转为16进制格式
    char c[] = "FishC";
    char *f = c;
    printf("*f = %c, *(f+1) = %c\n", *f, *(f + 1)); // 编译器会自动考虑元素的大小。对于char类型数组，f + 1实际上会将f的地址偏移 3 * sizeof(char)个字节，以指向数组的第2个元素位置
```
**`int (*)[10]`** **是指向包含 10 个 `int` 元素的一维数组的指针**
**`int*`** 是**指向 `int` 类型变量的指针**

## e23 指针数组和数组指针
数组名是个地址,不可改变非左值 ,而指针是变量可以改变为左值
指针数组是数组，例 int \*pi\[5]  因为优先执行\[] ,数组元素全为 int * 指针的数组称为指针数组，每个元素可以指向不同的字符串
数组指针为指针，例 int (\*p2)\[5] ,优先执行括号内取址运算符,表示指向数组的指针
```c title:"Arrays_of_Pointers_and_array_Pointers"
指针数组的输出如下,输出结果和二维数组一样
char *pi[5] = {"FishC", "Five", "Star","Good","WoW"};
//每个元素是char *类型的指针，指向一个字符串
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", pi[i]); // 因为pi[i]是数组里的元素，是指针，表示的是地址，所以不需要加*，而%s是通过地址找到字符串
    }
    
 数组指针的输出如下，数组指针指向的是数组
    int temp[5] = {1, 2, 3, 4, 5};
    int(*p)[5] = &temp; // 以前用的指针指向的是数值名称及数组第一个元素的地址，是一个变量，而现在学的数组指针指向的是数组，所以要获取数组的地址
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", (*p)[i]); // p是一个指向一个包含5个int类型元素的数组的指针，(*p)：将 p 解引用，得到它指向的数组，也就是temp数组，然后再用[]取出数组中的元素,数组指针也要先()来定义
    }
```

## e24 指针和二, 三维数组

 ```c title:"Pointers and two-dimensional arrays"
   int array[2][3] = {{0, 1, 2}, {3, 4, 5}};
   //*(array + 1) + 2 的含义是：指向array[1][2]即第二行第三列的指针
    int (*p)[3] = array;
    // 但如果我们取array本身，它代表的是一个指向一维数组的指针(指向一个包含3个int元素的一维数组的指针，即指向array[0]的指针
    // 而(*p)[3]表示的是一个包含3个int元素的一维指针数组，所以可以相等
    printf("**(p + 1) = %d\n", **(p + 1));
    // p 是指向 array 的第一个一维数组的指针
    // p + 1 移动到 array 的第二个一维数组（即 {3, 4, 5}）
    // **(p + 1) 解引用两次，得到第二行第一个元素的值，即 3
    printf("**(arr + 1) = %d\n", **(array + 1));
    // array 本身是一个指向一维数组的指针，array + 1 移动到第二个一维数组，* (array + 1)表示对(array + 1)解引用，得到array[1]即第二个一维数组的首地址
```

```c title:"三维数组"
char array[2][3][5]
array是一个 char[2][3][5] 的三维数组，退化为一个指向 char[3][5]`的指针
array + 1 是指向第二个 3x5 二维数组（array[1]）的地址
*array是得到array[0]，即指向第一个二维数组的地址
```

## e25 void指针野指针和null指针
<mark style="background: #ADCCFFA6;">谨慎使用void指针</mark>
void 指针可以指向任何类型的数据,及任何类型的指针都可以赋值给void 指针
```c title:"void point"
    int num = 1024;
    int *pi = &num;
    char *ps = "FishC";
    void *pv;
    pv = pi;
    printf(" pi = %p, pv = %p\n", pi, pv);  //指针赋值后地址一样
    pv = ps;
    printf(" *ps = %s\n", (char *)pv); // 通过强制类型转换，将 void 指针转换为 char 指针，使解引结果一样
    强行转换会优先取地址的最低字节
```

野指针和null指针
```c title:"Dangling Pointer and null point"
	int *p1;
    int *p2 = NULL;
    printf("p1 = %p\n", p1); // 野指针，指向一个不确定的内存地址
    printf("p2 = %p\n", p2); // NULL 指针，指向空地址
```
<mark style="background: #ABF7F7A6;">试图通过 NULL 指针进行解引用，则会导致程序崩溃
当不清楚要将指针初始化为什么地址时，请先初始化为NULL；在对指针进行解引用时，先检查该指针是否为NULL。</mark>


## e26 指向指针的指针
```c title:"point to point"
    int num = 520;
    int *p = &num;
    int **pp = &p;               // 定义一个指向指针p的地址的指针pp
    printf("**pp = %d\n", **pp); // 解引用两次，得到num的值
```


## e27 常量和指针
```c title:"指向常量的指针"
	int num = 520;
    const int cnum = 1314; // 表示不可修改
    const int *pc = &cnum;  // 指向常量的指针
    printf("cnun = %d\n", *pc);
    pc = &num; // 指向常量的指针本身是可以修改的
    printf("num  = %d\n", *pc);
    *pc = 880; // 会报错，因为pc是指向常量的指针，不能通过指针修改常量的值
```

```c title:"常量指针"
	int num = 520;
    const int cnum = 880;
    int *const p = &num; // p是指向int类型的常量指针，指针指向的地址不能修改，但指向的值可以修改
    *p = 1024;
    printf("num=%d, *p=%d\n", num, *p);  //1024 1024
    p = &cnum; // 会报错，因为常量指针自身的地址是常量，不能修改
```

## e28 函数
执行顺序是先执行main函数，遇到要调用的函数就去执行调用函数
写在最后的函数需要在开头进行声明
如 void func(); // 声明语句需要分号结束
### 无反回值函数
使用 `void` 关键字来定义不返回任何值的函数
```c
void greet()
{
	printf("Hello, world!\n");
}
```

### 反回值函数
```c
int square(int n)    //在函数括号里定义
{ 
	return n * n;
}
在main函数中若return 1 通常表示程序以错误状态退出
```

### 内联函数
通过`inline`关键字来定义内联函数
```c
inline int square(int x) {
    return x * x;
}
```
编译器会尝试在每个调用点**直接插入该函数的代码**，而不是执行通常的函数调用流程（例如，压栈、跳转、返回等）
不用写inline，编译器也会自动根据具体情况（如函数体积、调用频率）决定是否内联

### 参数传递
1.按值传递:函数在内部对形参进行的任何修改只会影响副本，而不会影响原来的实参
```c
void increment(int x) 
{ 
x = x + 1; printf("Inside function: %d\n", x); // 4 
} 
int main() 
{ 
int a = 3; increment(a); 
 printf("Outside function: %d\n", a); // 3 
 return 0;
}
a 的值没有被改变，因为 increment 函数对参数 x 的操作不会影响到原始的 a
```

2.按引用传递：可以通过指针来改变原始变量的值
```c title:"指针改变实参"
void increment(int *x) {
    *x = *x + 1;
}
int main() {
    int a = 3;
    increment(&a);
    printf("After increment: %d\n", a);  // 4
    return 0;
}
在这里，increment 函数通过指针 *x 修改了原始变量 a 的值
```

```c title:"数组改变实参"
#include <stdio.h>
void modify_array(int arr[], int size) {
    arr[1] = 99;  // 修改数组的第一个元素
}
int main() {
    int array[] = {1, 2, 3};
    modify_array(array, 3); //传入的实际是地址，占4个字节
    printf("%d %d %d\n", array[0], array[1], array[2]);  // 输出: 1 99 3
    return 0;
}
因为实际传输的是数组的第一个元素的地址，所以相当于传指针
```

### 可变参数
可变参数：允许函数接收不确定数量的参数,与普通的函数的区别在于它的**灵活性**，可以处理**任意数量**和**类型**的输入
在 C 中，要创建一个可变参数函数，需要使用头文件 `<stdarg.h>` 中的几个宏：`va_list`、`va_start`、`va_arg` 和 `va_end`。
- **`va_list`**：用于定义一个变量来存储可变参数列表。
- **`va_start`**：初始化 `va_list` 变量，使其指向可变参数列表的开始。
- **`va_arg`**：用于获取参数列表中的下一个参数，指定参数的类型。
- **`va_end`**：清理 `va_list`，通常在函数结束前调用。

示例：
```c title:"可变参数"
#include <stdio.h>
#include <stdarg.h> // 包含可变参数处理的头文件
int sum(int count, ...) { // count表示传入的整数个数
    int total = 0;  
    va_list args;   // 定义可变参数列表
    va_start(args, count);  // 初始化可变参数列表，将它指向第一个可变参数
    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);  // 逐个获取整数参数
        total += num;                 
    }
    va_end(args);  // 结束可变参数的处理
    return total;  
}
int main() {
    // 调用 sum 函数，前面第一个数表示数量
    printf("Sum of 2, 3, 4: %d\n", sum(3, 2, 3, 4));      
    return 0;
}
```


## e30 指针函数和函数指针

### 指针函数
是指返回类型为指针的函数，在返回类型前加上一个星号 `*` 表示返回一个指针。
例如`int* func(int x);`
这表示 `func` 是一个函数，它接受一个 `int` 参数，并返回一个指向 `int` 类型的指针。
``` c title:"指针函数"
int* get_pointer(int *x) { //接受一个int* 参数，即地址
    return x;  // 返回指针参数
}
int main() {
    int a = 10;
    int *p = get_pointer(&a);  // 调用指针函数，返回 a 的地址
```
<mark style="background: #FFB86CA6;">不要反回局部变量的指针</mark>，因为局部变量在函数结束后就会被销毁，从而导致指针指向的内存变得无效

### 函数指针
函数指针是指向函数的指针，指针的值是函数的地址。
语法：返回类型 (*指针变量名)(参数类型列表);*
例如，声明一个指向返回 `int` 并接受两个 `int` 参数的函数的指针：
`int (func_ptr)(int, int);`

```c title:"函数指针"
int add(int a, int b) {
    return a + b;}
int main() {
    // 定义一个函数指针，指向返回 int 类型且有两个 int 参数的函数 
    int (*operation)(int, int);
    // 将指针指向 add 函数，并调用
    operation = add;
    printf("Add: %d\n", (*operation)(5, 3));  // 输出：Add: 8
```

<mark style="background: #ABF7F7A6;">函数本身并不是指针，但函数的名称可以被视为指向该函数的指针
所以可以将函数名赋值给一个函数指针</mark>


### 指针函数和函数指针的混合应用（难）
**函数指针作为反回值:**
```cpp title:"函数指针为反回值"
int (*select(char op))(int, int);
定义了一个函数 select，它接收一个 char 类型的参数 op，并且返回一个指向函数的指针。这个指针指向的函数具有如下特性：
返回类型是 int,接收两个 int 类型的参数
具体注释: 因为考虑括号的优先级，先执行左边括号的内容，即int (*select(char op))，这是定义了一个指针函数，函数接受类型为char，返回值为指针，不知道指针指向哪，可以看成int (*)(int, int);这是一个函数指针，所以指针指向接受两个int类型的函数
swtich(op)
{
case '+' : return 函数一;
case '-' : return 函数二；
}
int (*fp)(int, int); //// 定义函数指针，指向一个函数，该函数接受两个int参数，返回一个int
fp = select; //虽然select的接收类型为char，但返回类型是一个指向函数类型的指针，所以此赋值使得 fp 指向了 select 返回的那个具体的函数指针，fp 并不指向 select 函数本身，而是指向 select 返回的函数，而select返回的函数指针所指向的函数类型均为 int x (int, int)因此select1的返回值可以被赋值给 fp
而当执行fp = select时，select函数就已经被调用了,调用后将返回函数的地址赋予给fp
```


## e31 局部变量和全局变量
局部变量：在函数或代码块中声明的，它们只能在声明它们的那个函数或代码块中访问，**如在for函数里定义的变量就是局部变量**
```c title:"局部变量"
int i = 520;
printf("before， i = %d\n", i);  i = 520
for(int i = 0; i < 10; i++)  //这里定义的i是局部变量，不会影响全局
{}
printf("after, i = %d", i); i的值还是520
```

全局变量：在所有函数之外定义的变量，作用域是整个程序
**如果不对全局变量初始化，那会自动初始化为0
如果在函数内部定义一个与全局变量同名的局部变量，会在这个函数中屏蔽全局变量，修改该局部变量不会影响全局变量的值**

**如果一个全局变量在被访问后才定义：**
用 extern 关键字对后边定义的全局变量进行修饰。这样就相当于告诉编译器：这个变量我在后边定义了，你先别急着报错。
如在需要用count变量前面加上 `extern int count`


## e32 作用域和链接属性
### 作用域
1. 块作用域：
	是由花括号 `{}` 包围的代码块中的变量的作用范围。局部变量（如在函数或代码块内部声明的变量）通常具有块作用域
	在代码块内声明的变量只能在该块内访问，块结束后该变量也随之被销毁
```c title:"块作用域"
void myFunction() 
{
    int x = 10;  // x 的作用域是整个 myFunction 函数内部
    if (x > 5) {
        int y = 20; // y 的作用域是 if 语句块内部
        int x = 20; //函数块内定义变量名可以和外面一样
    }
    // printf("%d", y);  // 错误：y 只能在 if 语句块内访问
	printf("%d", x); //结果还是10
}
```
2. 文件作用域:
	适用于在所有函数之外定义的全局变量和函数,作用范围是从声明位置到文件的末尾。可以在同一文件的任何地方使用
3. 函数作用域:
	用于定义可以在整个函数内使用的标签，通过 `goto` 语句进行跳转,标签不会影响函数外部，主要用于在函数内实现跳转逻辑
4. 原型作用域:
	函数参数在函数声明中的作用范围称为原型作用域

### 链接属性
链接属性描述变量或函数在多个源文件之间的可见性
1. 无链接:变量的名字在同一作用域的其他声明中不可见。这通常适用于函数内部声明的局部变量
2. 内部链接:使用 `static` 修饰符,用于限制变量或函数的作用范围，防止与其他文件中的同名变量或函数冲突
```c
static int internalVar = 10;  // internalVar 具有内部链接，仅限于当前源文件
static void internalFunction() { // 仅当前文件可见
}
```

3. 外部链接：具有外部链接的变量或函数可以在多个源文件之间共享,默认情况下，全局变量和函数都有外部链接。也可以使用 `extern` 明确声明
```c 
int externalVar = 20;  // 全局函数externalVar 具有外部链接，可以在其他文件中使用
extern int anotherVar;  // 使用 extern 声明，表明 anotherVar 在其他文件中定义
```

声明和定义的区别：当一个变量被定义的时候，编译器为变量申请内存空间并填充一些值。当一个变量被声明的时候，编译器就知道该变量被定义在其他地方，不需要再为此申请内存空间


## e33 生存期和存储类型
### 生存期
1. 自动生存期: 局部变量通常具有自动生存期，它们在函数或代码块开始时被创建，函数或代码块结束时被销毁
2. 静态生存期: 所有**全局变量**和**使用 `static` 关键字声明的变量**在程序开始执行时分配，并且在程序结束时释放
3. 动态生存期: 这些变量在运行时通过动态内存分配函数（如 `malloc` `calloc` 等）创建，需要手动释放（如通过 `free`）

### 存储类型
**存储类型**定义了变量的存储位置、生存期、作用域和默认初始化值。C 语言中有四种主要的存储类型：`auto`、`register`、`static`、`extern`
1. auto: 默认存储类型,自动生存期
2. register:存储在**寄存器**中，以提高访问速度,**但不能对它取地址**
3. static: 在程序启动时创建，并且一直存在到程序结束
	**作用域**：
	- 局部静态变量的作用域为所在函数，但它的值在函数调用之间保持不变。
	- 全局静态变量的作用域仅限于定义它的源文件（内部链接）。
```c title:"static"
void func()
{
    static int count = 0; // 静态局部变量
    printf("count = %d\n", count);  
    count++;
}
int main()
{
    int i;
     count ++  //错误：count是func函数的局部变量，不能在main函数中访问
    for (i = 0; i < 5; i++)
    {
        func(); // 会输出0,1,2,3,4,这里每次调用func函数，count的值都会保留，因为count是静态局部变量，直到程序结束才会无
    }
    return 0;
}
```
4. extern:可以在整个程序中使用,允许多个文件共享同一个全局变量
```c title:"extern"
extern int sharedVar;  // 声明其他文件中的全局变量 sharedVar
```


## e34 递归
**是指函数直接或间接调用自身的编程方法,通常包括两个部分**
**基准条件**：递归结束的条件，确保递归不会无限进行下去。
**递归条件**：在满足基准条件之前，函数继续调用自身
递归必须要有结束条件，否者程序会崩溃
示例：实现阶乘
```c title:"递归"
int factorial(int n) {
    if (n == 0) { return 1;}
    else {return n * factorial(n - 1);}  // 递归调用自己
}
int main() {
    int number = 5;
    printf("%d 的阶乘是 %d\n", number, factorial(number));
    return 0;
}
```

## e37 动态内存管理
动态内存管理允许我们：
- 在程序运行时分配和释放内存。
- 创建更灵活的数据结构，如链表、树和哈希表等。
动态内存管理是通过库函数在程序运行时分配和释放内存的机制。C语言中常用的动态内存管理函数有四个：`malloc`、`calloc`、`realloc`和`free`
动态内存分配在**堆区**进行，而局部变量则分配在**栈区**。堆区的内存需要手动管理，分配和释放的工作由程序员完成
==四个函数都要调用 \#include <stdlib.h>头文件==
1. malloc
原型为 `void *malloc(size_t size)`,向系统申请分配size个字节的内存空间，并返回一个`void*` 类型的指针指向这个空间，通常需要转换为适合的数据类型指针，**它不会初始化分配的内存，因此分配的内存可能包含垃圾值**
```c
int *ptr = (int *)malloc(sizeof(int) * 10);  // 分配 10 个整数的内存,并强制转化为int *类型`
```
如果分配失败，`malloc` 返回 `NULL`，此时应检查 `ptr` 是否为 `NULL`，以确保分配成功
`malloc` 分配的内存位于堆区，和栈上的局部变量独立

2. calloc
用于分配指定数量的内存块，并将每个字节初始化为0。和`malloc`相比，它接收两个参数：元素的数量和每个元素的大小,如果分配失败，`calloc` 也返回 `NULL`
```c
int *ptr = (int *)calloc(10, sizeof(int));  // 分配并初始化10个整数空间`
```
`calloc`分配的内存也位于堆区

3. realloc
用于调整已分配的内存块的大小。它能够扩展或缩小原内存块，避免频繁的分配和释放操作
```c
ptr = (int *)realloc(ptr, sizeof(int) * 20);  // 调整内存大小
```
如果扩展操作使当前内存块不够用，`realloc` 会申请新的内存块，将旧数据复制过来并释放原内存。**重新分配内存成功后原来的指针可能会改变(内存不足或内存碎片时)，因此应将返回值赋给原来的指针,这样可以保证 `ptr` 总是指向最新有效的内存地址
如果重新分配失败，`realloc` 返回 `NULL`**

4. free
用于释放之前用 `malloc`、`calloc` 或 `realloc` 分配的内存。释放内存后，指向该内存的指针不会自动置为 `NULL`，要手动置为null
```c
free(ptr);  // 释放内存
ptr = NULL; // 避免悬空指针
```


## e39 内存布局
通常内存布局如下图所示，地址从高到低排列：
  高地址
  -----------
  |   栈区   |    --> 局部变量、函数调用信息
  -----------
  |   堆区   |    --> 动态分配内存（malloc等）
  -----------
  | 数据区  |
  | -初始化数据段  | --> 已初始化的全局和静态变量
  | -未初始化数据段| --> 未初始化的全局和静态变量（BSS段）
  -----------
  | 常量区   |    --> 字符串常量和其他只读数据
  -----------
  | 代码区   |    --> 程序的机器指令
  -----------
  低地址


1. 栈区
- **存储内容**：局部变量、函数参数、返回地址等。
- **特点**：栈区的内存从高地址向低地址分配，通常由编译器自动分配和释放。栈的操作是以LIFO（后进先出）的顺序进行的。
- **生命周期**：局部变量在其函数结束时会被销毁，因此它们的生命周期短暂。
- **访问速度**：栈区的访问速度快，但其空间通常较小。
- **错误风险**：栈区使用不当可能导致“栈溢出”错误，如递归调用过深或创建大量局部变量。

2. 堆区
- **存储内容**：动态分配的内存，例如通过`malloc`、`calloc`、`realloc`分配的内存。
- **特点**：堆区从低地址向高地址分配，程序员可以在运行时自由地申请和释放内存，通常使用`free`函数释放。
- **生命周期**：程序员控制堆内存的释放，不会自动销毁，除非手动调用`free`。若未及时释放，可能导致“内存泄漏”。
- **访问速度**：堆区的访问速度比栈区慢。
- **错误风险**：如果程序员忘记释放内存或者重复释放，可能会导致内存泄漏或悬空指针。

3. 数据区 
数据区通常分为“初始化数据区”和“未初始化数据区”
- **初始化数据区**
    - **存储内容**：存储全局变量和静态变量，且这些变量已在编译时初始化。
    - **特点**：这部分内存是由操作系统分配的，并在程序结束时自动释放。
- **未初始化数据区 (BSS段)**
    - **存储内容**：存储未初始化的全局变量和静态变量。这些变量在程序启动时会被初始化为0。
    - **特点**：同样由操作系统管理，不需要程序员手动释放。
这两个区域在程序生命周期内持续存在，直到程序退出时才会被释放。


4. 常量区
- **存储内容**：字符串常量和其他常量数据。
- **特点**：一般来说是只读的，以保证程序的稳定性。
- **生命周期**：常量的生命周期贯穿程序的整个执行过程。

5. 代码区
- **存储内容**：程序的机器代码，即编译后的指令。
- **特点**：代码区通常是只读的，以防止程序意外修改指令，提高安全性。
- **生命周期**：代码区的生命周期与程序一致，且通常不可修改（除非进行特殊处理）。

## e42 结构体
用于将不同类型的数据组合在一起的复合数据类型
### 1.结构体基本语法
struct 结构体名 {
    数据类型 成员1;
    数据类型 成员2;
    数据类型 成员n;
};
使用点运算符`.`来访问结构体变量的成员

```c
struct Person { 
char name[50]; 
int age; 
float height;
}; //或者在}后直接声明变量person1，这个结构体变量就变成全局变量
struct Person person1; // 声明结构体变量person1
person1.age = 25; // 给成员变量age赋值
```
### 2.结构体的嵌套
```c
struct Address {
    char city[50];
    char state[50];
};
struct Person {
    char name[50];
    int age;
    struct Address address;  // 嵌套的结构体
};
int main() {
    struct Person person;
    // 给嵌套结构体的成员赋值
snprintf(person.address.city,sizeof(person.address.city), "New York");//将字符串安全的赋值给字符数组
printf("City: %s\n", person.address.city);
    return 0;
}
```
给嵌套的字符数组赋值：
方法1.使用 `snprintf`
方法2.使用字符串字面量初始化，如这里
**struct Address address = {"New York", "NY"}; 
person.address = address;**
### 3. 结构体指针
```c
void printPerson(struct Person *p)  //输入是指向结构体的指针
{ 
printf("Name: %s\n", p->name);  //指针指向结构体成员用->
printf("Age: %d\n", p->age);      
printf("Height: %.1f\n", p->height); 
}
int main(){printPerson(&person);}//结构体名称不是指针}
->运算符用于通过指针访问结构体成员，相当于(*p).member的简写
```

### 4.typedef 和结构体

^a5bd90

可以使用`typedef`给结构体定义一个别名
```c
typedef struct Person
{ 
char name[50]; 
int age; 
float height; 
}Person, *PDATE; // 给结构体类型定义别名Person和指针PDATE
PDATE ptr; // 等价于 Person *ptr;
int main() { Person person1;} // 直接使用别名声明变量
```

### 5. 结构体数组
```c
typedef struct {
    char name[50];
    int age;
} Person;
int main() {
    Person people[3] = {
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 22}
    };
    // 遍历结构体数组
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Age: %d\n", people[i].name, people[i].age);
    }
    return 0;
}
```

### 6. 结构体内存对齐与大小
`int` 通常需要按 4 字节对齐，`char` 通常按 1 字节对齐，`double` 需要按 8 字节对齐
结构体整体的大小通常是结构体成员中对齐边界最大的那个类型的倍数
如一个结构体中为{char, int ,char }类型，必须按照int类型进行对齐，
总大小为12 字节，前后的char都要填充3个字节
若一个结构体中为{char, char, int }类型，前面两个char聚一块再填充，想办法和int对齐
类型只需要往后一个看，若后一个是大类型，则填充到该类型的字节
具体对齐的方法：[结构体内存对齐](https://www.cnblogs.com/hyacinthLJP/p/16041690.html)

### 7. 结构体作为函数参数
结构体作为函数参数，既可以按**值传递**，也可以按**引用传递**
```c
void modifyPerson(struct Person *p)  //引用结构体
{ 
    p->age += 1;  // 修改结构体成员,先解引再++
    //若按值传递，则用p.age += 5;不影响原始变量
}
int main() {
    struct Person person = {"Emily", 28, 5.7};
    modifyPerson(&person);  // 按引用传递
    printf("Age after modification: %d\n", person.age);  // 输出29,影响原始变量
}
```

### 8. 结构体与位域
结构体还可以包含**位字段**，用于精确控制某些成员在结构体中的位数
```c
struct Flags {
unsigned int a : 1; // 1 位，存储 0 或 1 
unsigned int b : 3; // 3 位，存储 0 到 7 
unsigned int c : 4; // 4 位，存储 0 到 15
};
int main() {
    struct Flags flags = {1, 5, 10};
    printf("a: %u, b: %u, c: %u\n", flags.a, flags.b, flags.c);
    return 0;
}
```


## e45 单链表
是一种动态数据结构，用于存储一组数据元素。单链表由一系列节点组成，每个节点包含两个部分：数据部分和指向下一个节点的指针
与数组相比，可以在运行时动态增加或减少元素数量

### 在链表开头插入节点
```c
1，定义链表节点结构
//定义了一个链表节点Node的结构。每个节点包含一个整数数据 data 和一个指向下一个节点的指针next。
struct Node
{ 
int data; struct Node* next; 
};
2.创建节点：
struct Node* createNode(int value) //定义了一个返回指针的函数 ，返回类型为指向 Node 结构的指针
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node)); //通过 malloc 函数在堆内存上分配了一个Node结构的空间，并将其地址强制类型转换为 struct Node *，然后存储在指针newNode中
    newNode->data = value;//将新节点的data字段设为传入的value
    newNode->next = NULL; // 新节点的下一个节点初始为空
    return newNode; //返回新创建的节点的地址
}
3.插入节点：
void insertAtHead(struct Node **head, int value)  //struct Node **head 是指向Node指针的指针,即它指向链表头节点的地址
//如果只传递 struct Node *head（即头指针的副本）到函数中，函数只能修改副本，而无法影响 main 函数中 head 的实际内容
{
    struct Node *newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;  //hand是一个指向指针的指针，*head 表示的是main函数中实际的头指针
}
4.打印链表中所有节点的数据
void printList(struct Node* head) {
    struct Node* current = head;  //从第一个开始
    while (current != NULL) {
        printf("%d -> ", current->data); // 打印节点数据
        current = current->next;         // 移动到下一个节点
    }
    printf("NULL\n");
}
5.主函数测试
int main() {
    struct Node* head = NULL; // 初始化链表为空
    insertAtHead(&head, 10); // 插入值为10的节点
    insertAtHead(&head, 20); // 插入值为20的节点
    insertAtHead(&head, 30); // 插入值为30的节点
    printList(head); // 输出链表: 30 -> 20 -> 10 -> NULL
    freeList(&head); //释放列表
    return 0;
}
```

### 在链表末尾插入节点
```c
void insertAtTail(struct Node **head, int value) {
    struct Node *newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;  // 如果链表为空，新节点就是头节点
    } else {
        struct Node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;  // 找到最后一个节点
        }
        temp->next = newNode; //将最后一个节点的next指向新节点
    }
}
```

### 释放链表
由于链表中的节点是动态分配的，因此在程序结束时需要手动释放链表中的所有节点以防止内存泄漏：
```c
void freeList(struct Node **head)
{
    struct Node *temp;
    while (*head != NULL) {
        temp = *head;
        *head = (*head)->next;
        free(temp);  // 释放内存
    }
}
```

### 删除节点
```c
void deleteNode(struct Node **head, int value) {
    struct Node *temp = *head, *prev = NULL;
    // 检查头节点是否为要删除的节点
    if (temp != NULL && temp->data == value) {
        *head = temp->next;  // 修改头指针
        free(temp);  // 释放内存
        return;
    }
    // 查找要删除的节点，保持对前一个节点的跟踪
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    // 如果没有找到要删除的节点
    if (temp == NULL) return;
    // 从链表中断开节点
    prev->next = temp->next;
    free(temp);  // 释放内存
}
```

### 搜索节点
```c
struct Node* search(struct Node *head, int target) 
{ struct Node *current = head; // 从头节点开始遍历链表 
while (current != NULL) { 
if (current->data == target) 
{ return current;} // 找到目标值，返回指向该节点的指针 
current = current->next; } // 遍历到链表末尾仍未找到目标值，返回NULL 
return NULL; }
```

### 插入排序
```c
void sortedInsert(struct Node **head, struct Node *newNode) 
{
    // 如果链表为空或新节点值小于等于头节点值，将新节点插入到链表头部
    if (*head == NULL || (*head)->data >= newNode->data) 
    {
        newNode->next = *head;   // 新节点的 next 指向当前头节点
        *head = newNode;         // 头指针更新为新节点
    } 
    else {
        struct Node *current = *head;
        // 查找插入位置，找到第一个大于新节点值的位置
        while (current->next != NULL && current->next->data < newNode->data) 
        {
            current = current->next;
        }
        newNode->next = current->next; // 新节点的 next 指向找到位置的下一个节点
        current->next = newNode;       // 当前节点的 next 指向新节点
    }
}
```

## e48 内存池
1. 内存碎片
指在内存中由于多次分配和释放内存块后，空闲内存分布成不规则的小块，导致虽然系统中存在大量空闲内存，但由于这些空闲内存块不连续，无法满足大内存块的分配请求
2. 内存池
内存池则通过提前分配一大块内存区域，并将其切分成多个固定大小的内存块。当程序需要内存时，内存池提供一个空闲块，当不再使用内存时，内存池会将该块标记为可用，减少内存碎片。

## e49 typedef
1. 为基本数据类型定义别名
```c
typedef unsigned int uint;  // 将 unsigned int 类型定义为 uint
uint x = 100;  // 现在可以使用 uint 来定义变量
```

2. 结构体起别名
[[#^a5bd90|typedef和结构体]]

3. 为指针类型定义别名
```c
typedef int* IntPtr;  // 定义 int* 类型为 IntPtr
IntPtr ptr;  // 使用 IntPtr 来声明一个指针变量
```

4. 为函数指针类型定义别名
```c
typedef void (*FuncPtr)(int, int);  // 定义函数指针类型
FuncPtr func;  // 使用 FuncPtr 来声明一个函数指针 
```


## e52 共用体
它允许==在同一块内存空间地址中存储不同的数据类型，但同一时刻只能使用其中一种类型的数据==。共用体的作用是节省内存空间，因为不同成员共享同一段内存。具体来说，共用体是通过在内存中分配最大的成员所需的内存大小，而其他较小的成员则使用这块内存空间。**后面的赋值会覆盖前面的赋值**
形式：
```c
union Data
{ 
int i;
float f; 
char str[20]; 
}; 
int main()
{ union Data data;}
```

## e53 枚举类型
**枚举类型**（`enum`）是一种用户自定义的数据类型，它为一组整数值定义了符号常量，使代码更加可读且易于维护。枚举类型可以用来表示一个值的集合
```c
enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
//枚举值默认从 0 开始，Sunday 被赋值为 0，Monday 被赋值为 1，依此类推
int main() {
    enum Day today = Wednesday;   //定义方法和结构体类似
    printf("Today is day number %d\n", today);  // 输出：Today is day number 3
    return 0;
}
默认情况下枚举类型通常会被存储为 int 类型
```

## e54 位域
**位域**是一个结构体成员，它允许开发者控制结构体中各成员占用的位数，而不仅仅是按标准数据类型（如 `int`、`char` 等）来分配内存。可以节省内存空间
```c
struct BitField {
    unsigned int a : 5;  // 占用5位
    unsigned int b : 3;  // 占用3位
    unsigned int c : 2;  // 占用2位
}; //int 类型最多分配32位
a 占用了 5 位，因此它的值范围是 0 到2^5 - 1
```

位域的操作通常涉及对位进行读取、修改、清除、设置或翻转。常用的位运算符有：**按位与（&）**、**按位或（|）**、**按位异或（^）**、**按位非（~）**、**左移（<<）** 和 **右移（>>）**
- **按位与（&）**：将两个数的对应位进行“与”运算，只有两个位都为 1 时，结果位才为 1。
- **按位或（|）**：将两个数的对应位进行“或”运算，只有两个位都为 0 时，结果位才为 0。
- **按位异或（^）**：将两个数的对应位进行“异或”运算，只有两个位不同，结果位才为 1。
- **按位非（~）**：将一个数的每个位取反，0 变 1，1 变 0。
- **左移（<<）**：将二进制数的位向左移动，左移 1 位相当于乘以 2。
- **右移（>>）**：将二进制数的位向右移动，右移 1 位相当于除以 2（对于无符号数来说，结果直接丢弃）有符号数右移动的时候符号位保持不变，其余位全部右移。如1111 1101 >> 1 = 1111 1110  -> -2


## e55 文件
在C语言中，文件可以是文本文件，也可以是二进制文件：
- **文本文件**：以可读文本形式存储的数据，可以通过文本编辑器查看，例如 `.txt` 文件。
- **二进制文件**：以原始的二进制格式存储数据，适合存储图像、声音等数据，效率高但不易阅读

### 打开关闭文件
1. 文件指针 `FILE*`
文件是通过 **文件指针** (`FILE*`) 进行操作的。`FILE` 是一个结构体类型，定义在 `stdio.h` 中,`FILE*` 是指向文件的指针，用于管理文件的状态和信息
2. 文件打开和关闭
文件的打开和关闭分别使用 `fopen` 和 `fclose` 函数。
**fopen**: 用于打开文件，返回一个文件指针
```c
FILE *fopen(const char *filename, const char *mode);
```
- `filename`：要打开的文件名。
- `mode`：指定文件的打开方式，有几种常见的模式：
    - `"r"`：只读方式打开文件，文件必须存在。
    - `"w"`：写入方式打开文件，若文件不存在则创建，若文件存在则清空文件内容。
    - `"a"`：追加方式打开文件，若文件不存在则创建，若文件存在则在文件末尾追加。
    - `"r+"`：读写方式打开文件，文件必须存在。
    - `"w+"`：读写方式打开文件，若文件不存在则创建，若文件存在则清空文件内容。
    - `"a+"`：读写追加方式打开文件，若文件不存在则创建，若文件存在则在末尾追加。
    - `"rb"`：**二进制只读模式**。与 `"r"` 类似，但用于以二进制方式读取文件，"wb","ab"一样
例如
```c
FILE *fp = fopen("example.txt", "r");
if (fp == NULL) {
    printf("Failed to open file\n"); 
    return 1;
}
```

**fclose**: 用于关闭文件
`int fclose(FILE *fp);`
每次打开文件后，务必使用 `fclose` 关闭文件，以防止文件描述符泄漏
```c
fclose(fp); //成功关闭返回 0，否则返回 EOF
```

### 文件的读写
1. **fscanf 和 fprintf**：用于文本文件的读取和写入，类似于 `scanf` 和 `printf`。
```c
int fprintf(FILE *fp, const char *format, ...);
int fscanf(FILE *fp, const char *format, ...);
示例：
while (fscanf(inputFile, "%49s %d", name, &age) == 2) //常用只读文件，==2：是成功读取的项数，%49s 表示读取最多 49 个字符的字符串，并存储到 name 中
fprintf(outputFile, "%s %d\n", name, age); //常用写入文件
```

2. **fgetc 和 fputc**：用于读取和写入单个字符
```c
int fgetc(FILE *fp); //fgetc 从输入文件读取字符
int fputc(int character, FILE *fp); // fputc 将字符写入输出文件
```

3. **fgets 和 fputs**：用于读取和写入字符串
```c
char *fgets(char *str, int n, FILE *fp);
int fputs(const char *str, FILE *fp);   //fputs 将字符串写入输出文件
示例：
FILE *fp = fopen("example.txt", "r");
if (fp != NULL) {
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) //从文件指针fp指向的文件中读取一行文本，最多读取 sizeof(buffer) - 1 个字符，并将其存入buffer中。它会自动在读取的字符串末尾添加空字符 \0
    {
        printf("%s", buffer);
    }
    fclose(fp);
}
```

4. **fread 和 fwrite**：用于读取和写入**二进制**文件。
```c
size_t fread(void *ptr, size_t size, size_t count, FILE *fp); //用于从指定文件中读取指定尺寸的数据并存储
size_t fwrite(const void *ptr, size_t size, size_t count, FILE *fp); //将数据写入到文件
ptr：数据存放的指针。   size：每个数据项的字节数。
count：数据项的数量。   fp：文件指针

例子：
	Employee是结构体
    FILE *fp = fopen("employee.bin", "wb");//打开二进制文件
    Employee emp1 = {"Alice", 30, 55000.0}; //初始化结构体
    fwrite(&emp1, sizeof(Employee), 1, fp);//将结构体内容写入到文件中
    Employee emp2; //定义第二个结构体变量
    fread(&emp2, sizeof(Employee), 1, fp);
    //fread 从文件读取指定结构体内容并存储到 emp2
```

### 文件的位置控制
1. ftell ：用于获取文件指针当前位置 ,返回值表示文件指针相对于文件开头的字节偏移量
```c
long ftell(FILE *fp);
例子：
long position = ftell(fp); //获取文件指针位置
```

2. fseek：用于移动文件指针到指定位置
```c
int fseek(FILE *fp, long offset, int whence);
- offset：偏移量。
- whence：基准位置，可以是以下值：
    - SEEK_SET：文件开头。
    - SEEK_CUR：当前位置。
    - SEEK_END：文件末尾
例子：
 struct Stu{....} a,b; //定义两个结构体变量
FILE *fp = fopen("example.txt", "rb");
    fseek(fp, sizeof(struct Stu), SEEK_SET); // 移动到文件开头，并偏移一个结构体的量，直接指向第二个结构体
    fread(&b, sizeof(struct Stu), 1, fp) //将文件的内容传给结构体b
}
```

3. **rewind**：将文件指针重置到文件开头
```c
void rewind(FILE *fp); //指针重置到文件开头后插入数据会覆盖原始的数据
```

## e60 标准流和错误处理
C语言有三个标准流，每个流都与特定的输入或输出操作有关：
1.  `stdin`（标准输入）
**常见函数**：`scanf()`、`fgets()`、`getc(stdin)`等
2. `stdout`（标准输出）
**常见函数**：`printf()`、`fputs()`、`putc(stdout)`等
3. `stderr`（标准错误）
**常见函数**：`fprintf(stderr, ...)`、`perror()`，`strerror()`等
```c
//用fprintf(stderr, ...)获取错误
int value = -1;
if (value < 0) {
    fprintf(stderr, "Error: Value cannot be negative\n");
}

 //用perror()获取错误信息
perror("Error opening file");

//strerror(int errnum)：该函数返回一个指向描述错误代码的字符串的指针
需要  #include <errno.h>
printf("Error opening file: %s\n", strerror(errno));//自带参数errno
```


## e61  I/O缓冲区
1. 定义
I/O 缓存区是指内存中一个暂时存放数据的区域，用于在程序与输入/输出设备之间传输数据。在进行 I/O 操作时，数据不会直接从文件或控制台读取到程序，而是通过缓存区进行
标准 I/O 库函数（如 `printf`、`fgets`、`fscanf`、`fwrite` 等）使用了三种不同类型的缓存区：

- 全缓冲：只有当缓存区被填满或调用 `fflush()` 函数时，才会进行实际的 I/O 操作。==文件流 通常使用全缓冲，在调用 fclose(file)时被刷新写入文件==
- 行缓冲：==标准输出流常用，当程序输出换行符时缓存区会刷新==
- 无缓冲：数据立即被传输到目标设备，不经过缓冲区。==标准错误流是无缓冲==

2. 设置缓存方式
`setvbuf()` 和 `setbuf()` 函数可以用来设置文件流的缓存模式
- setvbuf()
```c
int setvbuf(FILE *stream, char *buf, int mode, size_t size);
- stream：需要设置缓存模式的文件指针。
- buf：指定缓存区的指针，如果是 NULL，则由系统自动分配。
- mode：缓存模式，可以是以下三种：
    - _IOFBF：全缓冲。
    - _IOLBF：行缓冲。
    - _IONBF：无缓冲。
- size：缓存区的大小
例如：
FILE *fp = fopen("example.txt", "w"); 
char buffer[1024];
setvbuf(fp, buffer, _IOFBF, sizeof(buffer)); // 为文件流设置全缓冲
```
- setbuf()
```c
setbuf(stdout, NULL);  // 将标准输出设置为无缓冲
- 如果 buf 为 NULL，则设置为无缓冲。
- 否则将设置为使用给定的缓存区。
```

3. 刷新缓存区
**`fflush(FILE *stream)`**：强制将文件流中的缓冲区内容输出到文件
```c
FILE *fp = fopen("example.txt", "w");
fprintf(fp, "Hello, World!");
fflush(fp);  // 强制将数据写入文件，而不等待缓存区填满
```

## e62 头文件
### 头文件定义
1. 头文件的作用
头文件的主要作用是提供声明，使得不同的源文件可以共享同一组声明，确保程序编译时的一致性。头文件通常包含以下内容：
- **函数声明**：提供函数的接口，告诉编译器函数的名字、返回值类型以及参数类型。
- **宏定义**：使用 `#define` 指令定义的宏，减少代码重复。
- **类型定义**：使用 `typedef` 或 `struct` 定义的数据类型。
- **全局变量声明**：如果需要多个文件共享某个全局变量，可以将其声明放在头文件中
头文件基本格式：
```c
#ifndef MATH_UTILS_H
#define MATH_UTILS_H
// 函数声明
int add(int a, int b);
int subtract(int a, int b);
// 宏定义
#define PI 3.14159
//自定义数据类型和结构体定义
typedef struct {
int x; int y; 
} Point;
#endif // 结束包含保护
#ifndef, #define, #endif 组合用于防止重复包含头文件
```

2. 头文件的引用
```c
#include <stdio.h>  // 引用标准库头文件
#include "math_utils.h"  // 引用用户自定义的头文件
```

3. 使用方法
创建一个数学工具库模块，可以按照以下步骤进行：
- 创建头文件 `math_utils.h`
- 创建源文件 `math_utils.c`，包含函数实现
- 创建主程序文件 `main.c`，调用数学工具库中的函数

4. 注意事项
- **不要在头文件中定义变量**：头文件中只能声明全局变量（使用 `extern`），不能定义变量。这是因为头文件可能会被多次包含，导致变量的多重定义。
- **函数实现应放在源文件中**

### 标准库头文件

#### include<time.h>文件
  1. **获取当前时间**
	- **`time_t` 类型**：用于表示从1970年1月1日（UTC）起经过的秒数，通常用于表示时间戳。
	- **`time()` 函数**：返回自1970年1月1日（UTC）至当前时间的秒数（即时间戳）

2. 转换时间格式
	- **localtime() 函数**：将 `time_t` 类型的时间戳转换为本地时间（即根据系统时区调整）。返回一个 `struct tm` 类型的指针
```c
#include <time.h>

int main() {
    time_t t;
    struct tm *tm_info;   指向结构体tm的指针
    
    time(&t);  // 获取当前时间戳
    tm_info = localtime(&t);  // 转换为本地时间
}

struct tm {
    int tm_sec;   // 秒 [0-60]
    int tm_min;   // 分钟 [0-59]
    int tm_hour;  // 小时 [0-23]
    int tm_mday;  // 日期 [1-31]
    int tm_mon;   // 月份 [0-11]
    int tm_year;  // 从1900年起的年数
    int tm_wday;  // 星期几 [0-6]，0表示星期天
    int tm_yday;  // 年中的第几天 [0-365]
    int tm_isdst; // 夏令时标志（0表示非夏令时，1表示夏令时，-1表示不知道）
};
```
  
 
























---
# 练习题

## task4 printf打印输出
```c title:"printout"
printf("打印五个字符:%c %c %c %c %c\n", 70, 105, 115, 104, 67); // 可直接打印ASCII码
printf("前边用 填充:%10d\n", 2015); // 打印输出后面可直接跟被代替的数字，不一定非要是变量
printf("前面用0填充:%010d\n", 2015);//%010d表示最小占10个字符，前面用0填充,而%10d前面用空格填充
printf("右对齐,指数形式:%10e\n", 520000.0); //默认情况下是右对齐，取指数用%e，10代表要占的最小字符数，e：科学计数法的符号，占1个字符。
printf("左对齐,指数形式:%-10E\n", 520000.0); //%-E变成左对齐，输出结果为5.200000E+005， +005：指数部分，占4个字符，代表10的-5次方，正数用%e，负数用%-E
printf("num的十六进制表示为: %x\n", num);// 以十六进制格式输出,整数形式为%x，16进制浮点数形式为%a
printf("num的八进制表示为: %o\n", num);//%o用于打印num的八进制表示
printf("int 类型的大小为：%zu 字节\n", sizeof(int));//%zu用于输出 size_t 类型的值

十六进制浮点数输出类似于  0x1.5fp+3,
- 0x 代表十六进制的前缀。 八进制的前缀为0
- 1.5 是有效位部分，用十六进制表示。
- p+3 是指数部分（以2为底的幂

十六进制浮点数转化为十进制: 例如0x1.5fp+3
一. 0x1.5 表示数值部分
十六进制中的 1.5 表示：1是整数部分， .5f 是小数部分，等于5 / 16 + 15/256 = 0.37109375,所以，0x1.5 用十进制表示为：
1 + 0.37109375 = 1.37109375
二. p+3 表示指数，底数为 2，意味着我们需要将 1.37109375 乘以2^3
结果为 1.37109375 × 2^3 = 10.96875
```

## task6 pow和sqrt,fabs函数
```c title:"pow"
#include <math.h> //可以用于定义pow函数 函数反回为double类型，还可以定义sqrt函数和fabs函数
// 如果要将pow函数的返回值赋值给long double类型的变量，需要强制类型转换，如定义long double b = (long double)pow(a, 5);
pow(x,y)函数，求x的y次方

sqrt()函数的作用是计算一个数的平方根 ,double sqrt(double x)
判断质数的方法：如果m不能被2 ~ sqrt(m)间任一整数整除，那么m必定是素数

fabs():绝对值函数，如c = fabs(b);fabs()函数返回b的绝对值
```

## task12 scanf用法
```c title:"scanf"
    printf("请输入式子: ");
    scanf("%d %c %d", &a, &ch, &b);
    /* %d会自动跳过空格，找到第一个数字开始读取
    在%d和%c之间的空格告诉scanf要跳过所有空格字符，直到遇到下一个非空字符
    如果没有在格式字符串中放置空格，%c会读取输入中的下一个字符，包括空格、换行等*/
    // scanf()函数返回值为成功读取的数据项个数,到输入结束符或读取发生错误时，scanf()返回EOF，通常值为-1
```

## task22 fgets函数
```c title:"fgets"
	#define MAX 1024
	printf("请输入第一个字符串：");
    fgets(str1, MAX, stdin);
    // fgets(str, MAX, stdin)的意思是从标准输入(stdin，通常是键盘输入)中读取最多 MAX-1个字符,并将这些字符存储到str中
    // fgets 会将换行符也作为输入的一部分保存到str中,它会在读取的字符串后面自动添加字符串终止符\0
```

## task23 指针数组和数组指针以及adoi函数
```c 
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = (int *)(&array + 1); // &array是数组array的地址，&array + 1是整个数组最后的位置（第二个 array 数组的起始位置）,然后 (int *) 将其强制转换为一个整型地址（指针），所以指针变量 p 初始化后，指向的地址应该是array[10],即第十一个元素

   #include <stdlib.h> // 引入stdlib.h以使用atoi函数
   atoi 函数将字符串转换为整数,如char str2[] = "456abc";
   printf("num2 = %d\n", num2 = atoi(str2)); // 输出：num2 = 456
   如果字符串开头的内容无法转换为数字，atoi 会返回 0, 

char *array[5] = {"FishC", "Five", "Star", "Good", "WoW"}; //array是一个包含5个元素的数组，数组中的每个元素都是char*类型的指针,指向一个字符串
char *(*p)[5] = &array; //p是一个指向数组的指针,这个数组包含5个 char * 类型的元素
对比 char (*p)[5] = &array;//p是一个指针，指向一个包含5个char元素的数组
(*p)[i][j]表示的是字符指针数组array中第i+1个字符串的第j+1个字符
```

## task30 函数指针数组
```c title:"Function pointer array"
double add(double a, double b)
{return a + b;}
double sub(double a, double b)
{ return a - b;}
double (*operations[2])(double, double) = {add, sub};
// 定义函数指针数组，指向两个个函数
printf("加法结果: %.2lf\n", operations[0](num1, num2));
printf("减法结果: %.2lf\n", operations[1](num1, num2));
```

