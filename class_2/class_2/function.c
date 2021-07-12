//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//////自定义函数的调用，以Add为例
////int Add(int x, int y)
////{
////	int z = x+y;
////	return z;
////}
////int main()
////{
////	int a = 1;
////	int b = 2;
////	int sum = 0;
////	int c = 100;
////	int d = 200;
////	sum = Add(a, b);
////	printf("%d\n", sum);
////	sum = Add(c, d);
////	printf("%d\n", sum);
////	return 0;
////}
//
//
//////数组arr[]的运用
////int main()
////{
////	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////	printf("%d\n", arr[4]);//下标4指第五个数，因为从0开始
////	int i = 0;
////	while (i < 10)
////	{
////		printf("%d ", arr[i]);
////		i++;
////	}	
////	printf("最后一个数是：%d\n", arr[9]);
////	return 0;
////}
//
//////操作符
//////算数操作符的取模操作符
////int main()
////{
////	int a = 5 / 2;
////	int b = 5 % 2;//取模，即余数
////	printf("%d\n", a);
////	printf("%d\n", b);
////	return 0;
////}
//
//
//////移位操作符（二进制）,即原码bit整体左移；
////int main()
////{
////	int a = 1;
////	int b = a << 1;
////	printf("%d\n", b);
////	int c = a << 2;
////	printf("%d\n", c);
////	int d = a << 3;
////	printf("%d\n", c);
////	return 0;
////}
//
//
//////位操作符(二进制)& | ^
//////按位与&，指源码都为真才真，0是假，非0是真
////int main()
////{
////	int a = 3;//    011
////	int b = 5;//    101
////	int c = a & b;//001
////	printf("%d\n", c);
////	return 0;
////}
////
//////按位与|，指源码有一个真就真
////int main()
////{
////	int a = 3;//    011
////	int b = 5;//    101
////	int c = a | b;//111
////	printf("%d\n", c);
////	return 0;
////}
////
//////按位异或^，指源码异同为真，相同为假
////int main()
////{
////	int a = 3;//    011
////	int b = 5;//    101
////	int c = a ^ b;//110
////	printf("%d\n", c);
////	return 0;
////}
//
//
//////单目操作符
//////!a 即0为1，非0则为0
////int main()
////{
////	int a = 10;
////	printf("非0的!a：%d\n", !a);
////	int c = 276;
////	printf("非0的!a：%d\n", !c);
////	int b = 0;
////	printf("0的!a：%d\n", !b);
//////sizeof 用作a,b,c等变量可省略括号
//////int long等不可省略
////	printf("a的大小：%d\n", sizeof(a));
////	printf("short的大小：%d\n", sizeof(short));
////	printf("a的大小：%d\n", sizeof a);
////	//printf("%d\n", sizeof short);//是错误写法
////	int arr[10] = { 0 };
////	printf("10个数数组的大小：%d\n", sizeof (arr));
////	//数组10个数，每个int是4字节
////	//以下是计算数组元素个数的方法
////	int  sz = 0;
////	sz = sizeof(arr) / sizeof(int);
////	printf("数组元素的个数为：%d\n", sz);
////	return 0;
////}
