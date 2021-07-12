#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////按(二进制)位取反~
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", a);//原码
//	printf("%d\n", b);//是补码，要减1，再把第一位数以外部分取反得原码
//	//      a  00000000000000000000000000000000 取反前原码
//	//     ~a  11111111111111111111111111111111 取反后的形式
//	//print(a) 10000000000000000000000000000001 补码转换回原码
//	return 0;
//}


////前置和后置++的用法,--同理
//int main()
//{
//	int a = 10;
//	int b = a++;//是后置++，先赋值给b，再自加1
//	printf("a=%d,b=%d\n", a, b);//即a=11,b=10
//	int c = 10;
//	int d = ++c;//先自+1，再赋值给d
//	printf("c=%d,d=%d", c, d);
//	return 0;
//}



////(类型)强制类型转换,一般不转换
//int main()
//{
//	int a = (int)3.14;//强行截取3.14成3
//	printf("%d\n", a);
//	return 0;
//}


////逻辑操作符 &&逻辑与 ||逻辑或
////真指的是非0的数，0为假
//int main()
//{
//	int a = 0;
//	int b = 5;
//	int x = a && b;//&&都真才真
//	printf("a && b = %d\n", x);
//	int c = 0;
//	int d = 5;
//	int y = c || d;//||一真则真
//	printf("c || d = %d\n", y);
//	return 0;
//}


////条件操作符也叫三目操作符.
////如果exp1真，则结果为exp2,否则为exp3
//int main()
//{
//	int a = 17;//a、b可改
//	int b = 6;
//	int max = 0;
//	max = (a > b ? a : b);//(exp1?exp2:exp3;)
//	printf("较大值为：%d\n", max);
//	return 0;
//}


////(仅仅是建议放入)寄存器变量
//int main()
//{
//	register int a = 10;
//	return 0;
//}


////类型重定义typedef
//typedef unsigned int u_int;
//int main()
//{
//	u_int a = 10;
//	unsigned int b = 10;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


////static静态,修饰局部变量,扩大生命周期
//void test()
//{
//	static int a = 0;//使得a不在出局部后销毁
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


////static，修饰全局变量，缩小作用域
////让全局变量无法extern,只能在原文件使用
//static int g = 10;//无法此源文件外extern
//int Add(int x, int y)//此函数也无法在外extern
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = Add(a, b);
//	printf("%d\n",c);
//	return 0;
//}


////函数的方式
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的方式
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = MAX(a, b);//宏的方式
//	int d = Max(a, b);//函数的方式
//	printf("较大值为%d\n", c);
//	printf("较大值为%d\n", d);
//	return 0;
//}



////指针是个变量，用来存放地址，未来用*解引用
//int main()
//{
//	int a = 10;
//	printf("&a = %p\n", &a); //打印地址
//	int* p = &a;//p是指针变量，专门记录地址,用int*
//	printf(" p = %p\n", p); //打印储存的地址
//	*p = 20;//*是解引用操作符,这里是把p地址，也就是a改为20
//	printf(" a = %d(改变后的)\n", a);
//	return 0;
//}



////指针(以字符为例),指针是p，类型为int* char*等
//int main()
//{
//	char ch = 'w';
//	printf("&ch = %p\n", &ch); 
//	char* p = &ch;
//	printf("  p = %p\n", p); 
//	*p = 'a';
//	printf(" ch = %c(改变后的)\n", ch);
//	printf("sizeof (p)=%d\n", sizeof(p));
//	//32位和64位机器地址字节为4和8，由IDE设置，可在debug后面改
//	return 0;
//}



//
int main()
{

	return 0;
}