#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////多个分支的if
//int main()
//{
//	int a = 7;//判断a值的大小
//	if (a > 10)
//		printf("a>10");
//	else if (a > 5)
//		printf("5<a<10");
//	else 
//		printf("a<=5");
//	return 0;
//}



////年龄为例，&&在if中的用法，及{}代码块示例
//int main()
//{
//	int age = 27;//改变年龄age值得到不同结果
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//	{//代码块，用{}括起来，才能保证if和else不报错
//		printf("青年\n");
//		printf("好好学习\n");
//	}
//	else if (age >= 28 && age < 48)
//		printf("壮年\n");
//	else 
//		printf("老年\n");
//	return 0;
//}



////输出1-100之间的奇数
////(逃课算法i+=2)
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (1 == i % 2)
//			printf("%d ", i);
//		i++;	
//	}
//	return 0;
//}



////switch语句，注重多分支
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch里放整型表达式，值为几就进case几
//	{
//	case 1:
//		printf("星期一\n");
//		break;//break直接跳过后面的case
//	case 2://否则符合条件的case及之后的case都会执行
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break; 
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//	}
//	return 0;
//}




////switch语句，非全部break案例
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:	
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("请输入1~7之间的整数\n");
//		break;
//	}
//	return 0;
//}



////switch嵌套测试(课堂练习)
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)//可以switch嵌套，注意{}
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);//得m=5,n=3
//	return 0;
//}



////循环语句while打印1~10，及break打破循环的方法
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//		{
//			break;//打破循环
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0; 
//}



////continue的重返while作用
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//		{
//			continue;//回到while,死循环
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}



////getchar获取用户输入字符，putchar打印字符
//int main()
//{
//	int ch = getchar();//用户输入字符
//	putchar(ch);//等同于printf
//	printf("%c", ch);
//	return 0;
//}