#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>


////函数
////strcpy字符串复制拷贝，结尾\0也拷贝了
//int main()
//{
//	char arr1[] = "字符串拷贝测试";
//	char arr2[20] = "0";//[]要加数字,不然,大放入小会出错
//	char arr3[40];//可以只给[]数字不给内容
//	strcpy(arr2, arr1);
//	strcpy(arr3,"字符串拷贝测试其二");//可以直接给定copy内容
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}



////memset内存设置,例如，改变字符串前一部分的内容
////memset更改值可放单个字符，因为其用ASCII码值储存，但不能用字符串。
//int main()
//{
//	char arr[] = "hello world";//字符串"",单个字符''创建时字符不需要{}
//	memset(arr, '*', 5);//memset(对象,更改值，从开头开始的更改个数)
//	printf("%s\n", arr);
//	return 0;
//} 



////自定义函数get_max比较两个数最大值
//int get_max(int x, int y)
//{
//	if (x > y)//能直接返回就不用第三变量z
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d", max);
//	return 0;
//}



////自定义函数Swap交换两个整形内容(错误示范)(xy与ab地址不同，故无关)
//void Swap(int x, int y)//void表示无返回值
//{
//	int z;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}



//////自定义函数Swap交换两个整形内容(正确示范)
//void Swap(int* pa, int* pb)//void表示无返回值
//{//用指针int* pa接受地址,int* pa可换成int* x等
//	int z;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(&a, &b);//传递ab地址去函数
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}



////打印100~200的素数，用自定义函数(与标准相同)
//int is_prime(int x)
//{
//	int tmp = 2;//试除法
//	for (tmp = 2; tmp < x; tmp++)
//	{
//		if (x % tmp == 0)
//		{
//			return 0;//return直接结束函数，比break强
//		}
//	}
//	return 1;//都没有能整除的则返回1
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



////打印100~200的素数(试除法，平方根优化)
//int is_prime(int x)
//{
//	int tmp = 2;//引用平方根sqrt需要#include<math.h>
//	for (tmp = 2; tmp <= sqrt(x); tmp++)
//	{
//		if (x % tmp == 0)
//		{
//			return 0;//return直接结束函数，比break强
//		}
//	}
//	return 1;//都没有能整除的则返回1
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



////判断闰年，自定义函数
////闰年返回1，否则返回0
//int is_leap_year(int y)
//{//①闰年能整除4且不可整除100②能整除400直接算闰年
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else 
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}



////二分查找，有序数组，自定义函数
//int binary_search(int arr[], int k, int sz)//形参的数组可以不指定[]大小
//{//int arr[]是实参数组，但本质是个指针。k是要找数。sz是数组元素数量。
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//在函数中sizeof(arr)只算了引用指针的大小，所以拿到外面来算
//	int ret = binary_search(arr, k, sz);//指二分查找
//	if (-ret == 1)//原本又错了一次==和=
//	{
//		printf("数组中找不到指定数字\n");
//	}
//	else
//	{
//		printf("找到了，下标：%d\n", ret);
//	}
//	return 0;
//}



////num++，自定义函数
//void Plus(int* p)
//{
//	(*p)++;//不括号的话会先p++，再*p
//}
//int main()
//{
//	int num = 0;
//	Plus(&num);//要注意传递的是&地址
//	printf("num++ 一次：%d\n", num);
//	Plus(&num);
//	Plus(&num);
//	printf("num++ 再两次：%d\n", num);
//	return 0;
//}



////函数嵌套调用
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_new_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("hehe\n");//嵌套3次打印一行
//	}
//}
//int main()
//{
//	three_new_line();//打印三行
//	return 0;
//}



////函数链式访问
//int main()
//{//strlen的返回值给予printf作为参数
//	printf("%d\n", strlen("abc"));
//	return 0;
//}



////printf的链式访问。printf返回值是打印字符串的长度
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}



////函数声明。声明自己的函数用""而非<>
////add.h是自建的头文件，add.c放置函数内容
////函数声明意义在于，可以实现分工合作，各做各的模块
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}