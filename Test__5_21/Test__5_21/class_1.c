#include<stdio.h>
#pragma warning(disable:4996)//用于忽略scanf的不安全性报错

int c = 10;
int main()
{
	//char和int的打印测试
	//char ch = 'A';
	//printf("%c\n", ch);
	//int age = 20;
	//printf("%d\n", age);
	
	//float f = 6.0;//打印浮点
	//printf("%f\n", f);
	
	//double d = 3.14159;//打印双精度浮点
	//printf("%lf\n", d);

	//测试占用内存大小
	//printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(long long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));

	//年龄和体重的指定
	//short age = 20;
	//float weight = 95.6;
	//上式结尾f用于防止从double到float截断
	//printf("%f\n",weight);
	//printf("%d\n", age);

	//局部变量和全局变量
	//int c = 2;
	//printf("%d\n", c);

	////计算相加，用scanf
	//int a1 = 0;
	//int a2 = 0;
	//scanf("%d%d", &a1, &a2);//输入函数。scanf会报错
	////方法1：原文scanf改为scanf_s用于防止报错，但可能不适用于VS以外
	////方法2：在前面加上#pragma warning(disable:4996)
	////&是取地址符号,（前有空格）值放在a1,a2
	//int sum = 0;
	//sum = a1 + a2;
	//printf("sum = %d\n", sum);

	////局部变量(的作用域)在相应{}内的{}也有效
	//int b1 = 2;
	//printf("%d\n", b1);
	//{
	//	printf("%d\n", b1);
	//}

	////全局变量extern调用声明
	//extern int e;
	//printf("%d\n", e);
	return 0;
}