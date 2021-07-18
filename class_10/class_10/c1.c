#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"
#include<string.h>



////联动于定义add.c和声明add.h的Add函数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}



////函数递归，简单示例，栈溢出
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}



////递归练习①一个整型值(无符号)，按顺序打印每一位
//void print(int n)//自定义函数
//{//递归思想就是自我嵌套到不能再嵌为止，再逐步返回
//	if (n > 9)//表明是至少2位数，要拆分
//	{
//		print(n / 10);
//	}//指1234/10得到123和打印4,123再带入print得12和打印3，12带入print再得1和打印2，此时n<9故直接1%10得到1
//	printf("%d ", n);//在十位、百位等数打印完后，最后打印个位数
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//如1234
//	print(num);//是自定义函数，指打印每一位数
//	return 0;
//}



////递归练习②求字符串长度，自定义函数，无限制
//int my_strlen(char* str)//接受了数组的首元素地址，所以用*来接
//{
//	int count = 0;
//	while (*str != '\0')//因为解引用是第一个数，所以直接比较单字符，不需要strcmp字符串比较
//	{
//		count++;//只要没到'\0'的地址，就计数一次
//		str++;//地址+1，指针指向第二个数
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//数组传参不是整个数组，而是首元素地址
//	printf("len = %d\n", len);
//	return 0;
//}



////递归练习②求字符串长度，不允许创建临时变量(不允许用strlen)
//int my_strlen(char* str)//接受了数组的首元素地址，所以用*来接
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);//str + 1就是地址+1，读取下一个数地址
//	}//符合条件!='\0'就return值+1
//	else
//		return 0;//如果一上来就是\0，那数组长度为0
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//数组传参不是整个数组，而是首元素地址
//	printf("len = %d\n", len);
//	return 0;
//}


////递归练习③求n!(循环版，非递归)
//int Fac_1(int n)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac_1(n);//自定义函数求阶层
//	printf("%d\n", ret);
//	return 0;
//}



////递归练习③求n!递归版(不考虑溢出)
//int Fac_2(int n)//
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac_2(n - 1);//即n乘以n-1的阶层
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac_2(n);//自定义函数求阶层
//	printf("%d\n", ret);
//	return 0;
//}



////递归练习④求第n个斐波那契数。(极低效递归版)(会溢出)
//int Fib(int n)
//{
//	if (n <= 2)//开始的两个数是1
//		return 1;
//	else
//		return Fib(n - 2) + Fib(n - 1);//效率很低，大量重复计算
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}



////递归练习④求第n个斐波那契数。(极高效迭代版)(会溢出)
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//当n<2直接return出1
//	while (n > 2)//比2多几，就c=a+b几次。
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;//每次更接近n>2的条件
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}



////栈溢出示例，按住F10调试可以看到Stack overflow
//void Test(int n)
//{
//	if (n < 10000)
//	{
//		Test(n + 1);
//	}
//}
//int main()
//{
//	Test(1);
//	return 0;
//}



//汉诺塔hanoi问题(搁置)



//青蛙跳台阶问题(本质上是斐波那契数列)
//一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。
//如果n=1，只有一种跳法，那就是1
//如果n=2，那么有两种跳法，2，[1,1]
//如果n=3，那么有三种跳法，[1,1,1],[1,2],[2,1]
//如果n=4，那么有五种跳法，[1,1,1,1],[1,1,2],[1,2,1],[2,1,1],[2,2]
//如果n=5，那么有八种跳法，[1,1,1,1,1],[1,1,1,2],[1,1,2,1],[1,2,1,1],[2,1,1,1],[2,2,1],[2,1,2],[1,2,2]
//结果为1，2，3，5，8  是斐波那切数列
 
 
//https://blog.csdn.net/zhangshk_/article/details/81148340
////青蛙跳台阶递归做法：
// int jump(int n) 
// {
//    if (n == 0)
//        return 0;
//    if (n == 1)
//        return 1;
//    if (n == 2)
//        return 2;
//    return jump(n - 1) + jump(n - 2);
//}
// int main()
// {
//     int n, ret;
//     printf("请输入青蛙要跳几层台阶\n");
//     scanf("%d", &n);
//     ret = jump(n);
//     printf("总共%d种情况\n",ret);
//     return 0;
// }



////青蛙跳台阶循环做法：
//int jump2(int n) 
//{
//    if (n == 0)
//        return 0;
//    if (n == 1)
//        return 1;
//    if (n == 2)
//        return 2;
//    int b = 1;
//    int c = 2;
//    int count = 2;
//    while (count++ < n) //先比较，再++，比2多几就执行几次
//    {
//        int a = b;//a=1      第二轮a=2      第二轮a=3 
//        b = c;//    b=2      第二轮b=3      第二轮b=5
//        c = a + c;//c=1+2=3  第二轮c=2+3=5  第三轮c=3+5=8  以此类推
//    }
//    return c;
//}
//int main()
//{
//    int n, ret;
//    printf("请输入青蛙要跳几层台阶\n");
//    scanf("%d", &n);
//    ret = jump2(n);
//    printf("总共%d种情况\n", ret);
//    return 0;
//}