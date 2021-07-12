//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#define MAX 10 
//
//int main()
//{
////  scanf和相加的复盘
////	int a = 0;
////	int b = 0;
////	int sum = 0;
////	printf("请输入要相加的两个数(空格间隔)\n");
////	scanf("%d%d", &a, &b);
////	sum = a + b;
////	printf("sum=%d", sum);
//
//////常量
////	const int a = 6;
////	printf("%d\n", a);
////	int arr[MAX] = { 0 };//数组
////	printf("%d\n", MAX);
//
//	////字符串字面值(双引号""引起)
//	////(单个)字符用''单引号
//	//char arr1[] = "abc";//放在数组里的字符串
//	//char arr2[] = { 'a', 'b', 'c' ,0 };//字符串结束标志\0
//	////或者char arr2[] = { 'a', 'b', 'c' ,'\0' };
//	//printf("%s\n", arr1);//打印字符串%s
//	//printf("%s\n", arr2);//打印字符串%s
//
//	////测试字符串长度strlen()
//	//char arr1[] = "abc";
//	//char arr2[] = { 'a', 'b', 'c'};
//	//printf("%d\n", strlen(arr1));//\0不计算长度
//	//printf("%d\n", strlen(arr2));
//
//	////转义字符\系利
//	//printf("D:\\Tools\\MVS");//双\表示纯字符\，不再转义
//
//	////转义字符\系利2
//	//printf("%c\n", '\'');// \'表示纯字符'
//	//printf("%c\n", '\"'); // \"表示纯字符"
//
//	////转义字符\系利3 善于 用\取消转义字符的作用
//	//printf("%d\n", strlen("c:\test\32\test.c"));
//	//printf("%d\n", strlen("c:\\test\\32\\test.c"));
//	//printf("%c\n", '\132');//132是八进制，得出ASCII码的90为'Z'，且全部只算一个字符
//	
//	////分支语句(选择语句) if else
//	//int input = 0;
//	//printf("要好好学习吗？（1/0）>:");
//	//scanf("%d", &input);
//	//if (input == 1)
//	//	printf("好offer\n");
//	//else
//	//	printf("卖地瓜");
//
//	////循环语句(while)
//	//int line = 0;
//	//while (line < 20000)
//	//{
//	//	printf("敲一行代码: %d\n", line);
//	//	line++;//自己加1
//	//}
//	//printf("已敲代码：%d\n", line);
//	//if(line >= 20000)
//	//	printf("好offer\n");
//
//	return 0;
//}