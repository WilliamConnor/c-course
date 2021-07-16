#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//引用strlen strcmp等
#include<math.h>//引用sqrt
#include <stdlib.h>//引用rand() 引用system()
#include <time.h>//引用time()





////default放在最后会被执行,和放在前面有不一样的结果
//int main()
//{
//	int i = 1;
//	int n = 0;
//	switch (i)
//	{
//	case 1:
//		n = 1;
//	case 2:
//		n = 2;
//	case 3:
//		n = 3;
//	default:
//		n = 4;
//	}
//	printf("%d", n);
//	return 0;
//}



////任意个数输出最大值
//int main()
//{
//	char arr1[] = {1,2,7,3,5,8,9,2,6};//给任意数组
//	int i = 0;
//	int n = arr1[0];
//	int sz = sizeof(arr1)/sizeof(arr1[0])-1;//sz是最后下标值
//	for (i = 1; i<=sz; i++)
//	{
//		if(arr1[i] > n)
//		{
//			n = arr1[i];
//		}
//	}
//	printf("%d ", n);
//	return 0;
//}



////三个数输出从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//输入带空格
//	//算法要让a放最大值,bc依次
//	if (a < b)//a>b则不管，小于b则要替换二者
//	{
//		int tmp = a;//临时的局部变量
//		a = b;
//		b = tmp;
//	}
//	if(a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}



////打印1~100所有是3的倍数的数
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



////求两个数的最大公约数(未验证正确性)
//int main()
//{
//	int a, b, i, n;
//	scanf("%d%d", &a, &b);//输入两个数
//	if(a<b)
//	{
//		i = a;
//		n = b; //n赋予更大数
//
//	}
//	else
//	{
//		i = b;
//		n = a;
//	}
//	for (i; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("最大公约数是%d", i);
//			break;
//		}
//	}
//	return 0;
//}



////求两个数的最大公约数(辗转相除法)
//int main()
//{
//	int m = 24;
//	int n = 18;
//	//scanf("%d%d", &m, &n);//可自定义输入
//	int r = 0;
//	while (m % n)//能够整除，说明是公约数。不需要加!=这个判断，因为默认判断就是0假，非0真。
//	{
//		r = m % n;//24模18余6，可以直接放在while(r = m % n)
//		m = n;//m取18
//		n = r;//n取6，再辗转相除
//
//	}
//	printf("%d", n);
//	return 0;
//}



////打印1000~2000的闰年
////注：闰年①能被4整除而不能被100整除或②能被400整除
//int main()
//{
//	int a = 1000;
//	int b = 2000;
//	int i = 1000;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//		else if (i%100 ==0)
//		{
//			;
//		}
//		else if(i % 4 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



////打印1000~2000的闰年(官方)
//int main()
//{
//	int count = 0;//顺便统计闰年
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n%d ", count);
//	return 0;
//}//高端版if(((year%4==0)&&(year%100!=0))||(year%400==0))




////打印100~200之间素数①试除法(较差)
////素数只能被1和自身整除
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)//相等说明2到n-1都不能整除
//		{
//			printf("%d ", i);//打印素数
//		}
//	}
//	return 0;
//}



////打印100~200之间素数②试除优化算法i=a*b
////有其中一个因子a能整除就不是素数。即a和b至少有一个数是 <= 开平方i
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)//只要判断到根号i都没有数能整除，后面也一样
//		{//sqrt开平方的数学库函数
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))//相等说明2到n-1都不能整除
//		{
//			printf("%d ", i);//打印素数
//		}
//	}
//	return 0;
//}



////打印100~200之间素数③试除更优化算法
////因为偶数肯定能整除2，所以从101开始，且i每次+2
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)//只要判断到根号i都没有数能整除，后面也一样
//		{//sqrt开平方的数学库函数
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))//相等说明2到n-1都不能整除
//		{
//			printf("%d ", i);//打印素数
//		}
//	}
//	return 0;
//}



////1~100所有整数出现多少个9(99算2个9)
////表达式必须是可修改的左值，可能指==打错成=
//int main()
//{
//	int i = 9;
//	int count = 0;
//	for (i = 9; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)//并列if让个位、十位的9都执行
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n总共%d个9", count);
//	return 0;
//}



////④分数求和。计算1/1-1/2+1/3-1/4+1/5……+1/99-1/100的值
////除法/两端至少一个是浮点，也即1.0等形式。
////赋值给的值需要float或double形式，且初始值为0.0等。打印需要%f或%lf形式
//int main()
//{
//	int i = 1;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i += 1)
//	{
//		sum = sum + flag * 1.0 / i;//代码按数学的乘除优先
//		flag = -flag;//轮换+-的方法
//	}
//	printf("求和得%lf\n", sum);
//	return 0;
//}



////⑤求10个整数中的最大值
//int main()
//{
//	int arr[10] = { 1,2,3,27,5,6,16,8,9,10 };
//	int i = 0;
//	int max = arr[0];//注意预先给arr[0],才有比较
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)//max是arr[0],所以从arr[1]开始
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大值为%d\n", max);
//	return 0;
//}



////⑥打印9*9乘法口诀表(行列反了)
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int n = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = a; b <= 9; b++)//用b=a开始，以去掉重复的乘法
//		{
//			n = a * b;
//			printf("%d*%d=%d ", a, b, n);
//			if (b == 9)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}



////⑥打印9*9乘法口诀表(应该是标准行列)
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int n = 0;
//	for (i = 1; i <= 9; i++)//i确定打印9行
//	{
//		for (j = 1; j <= i; j++)//j打印单行的信息
//		{
//			n = i * j;
//			printf("%d*%d=%-2d ", i, j, n);//%2d打印2位。不够2位数用空格补
//		}//%-2d其中-是向左对齐
//		printf("\n");//结束完一行j打印下一行
//	}
//	return 0;
//}



////⑦二分查找，在整形数组中查找某个数。
////要求找到了打印相应数的[下标]，找不到输出；找不到。
//int main()
//{
//	int arr[] = { 1,2,4,5,6,9,10,13,14,15 };//数组任意更改
//	//下标对照= { 0,1,2,3,4,5,6,7,8,9 }
//	int sz = sizeof(arr) / sizeof(arr[0]);//元素数量
//	int i = 0;
//	int n = 0;//查找的数
//	printf("请输入要查找的数：");
//	scanf("%d", &n);
//	int left = 0;
//	int right = sz;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//最中间数的下标
//		if (arr[mid] == n)
//		{
//			printf("找到了下标是：%d", mid);
//			break;//找到了就及时终止，以免和"没找到"冲突打印
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
//			left = mid + 1;
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}



////猜数字游戏
////①电脑会生成一个随机数②猜大猜小猜对都会告诉你
////RAND_MAX//右键查看定义0x7fff，0~32,767
//void menu()//自定义函数，打印一个菜单界面
//{
//	printf("******************************\n");
//	printf("*****  1.play    0.exit  *****\n");
//	printf("******************************\n");
//}
//void game()
//{
//	int r = 0;//接受随机数
//	int guess = 0;//接受用户的输入
//	r = rand() % 100 + 1;//①生成伪随机数，其实是查同一个表的值，不随机。%100+1就使得范围在1~100
//	while (1)//②猜数字。while (1)就是恒执行，直到猜对了用break跳出
//	{
//		printf("猜数字:>\n");
//		scanf("%d", &guess);
//		if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < r)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//	printf("%d\n", r);
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//srand只需要调用一次，main开头就行，就可以生成真随机，放在函数中频繁调用反而不随机
//	//srand提供了rand的种子。time有指针*，用NULL成空指针
//	//time本质是long，用unsigned int转化int正整数
//	int input = 0;
//	do
//	{
//		menu();//只是普通自定义函数而已，不是高端货
//		printf("请选择>:");
//		scanf("%d", &input);//用户输入，%d不要带空格，和printf不一样
//		switch (input)
//		{
//		case 1:
//			game();//game自定义函数
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);//实际是input!=0来循环，这里按0假,非0真原理省略了
//	return 0;
//}



////真随机数的生成，独立版。//未完成
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int r = 0;
//	int input = 1;
//	while (input == 1)
//	{
//		r = rand() % 100 + 1;
//		printf("随机数为：%d\n", r);
//		printf("再来一次请输入1并回车\n\n");
//		scanf("%d", &input);
//	}
//	printf("程序已退出\n");
//	return 0;
//}



////goto测试
//int main()
//{
//	printf("goto测试1\n");
//	goto abc;
//	printf("goto测试2\n");
//abc://goto的标签任意定义，可上可下，注意是:冒号
//	printf("goto测试3\n");
//	return 0;
//}



////goto之关机程序。shutdown用#include <stdlib.h>引头
////shutdown -s -t 60在60秒内关机。shutdown -a取消关机。
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("注意！您的电脑将在1分钟内关机\n请输入“取消关机”来取消\n");//颜色不同大概只是不同行提示
//	scanf("%s", &input);
//	if (strcmp(input, "取消关机") == 0)
//	{
//		system("shutdown -a");
//		printf("取消关机成功");
//	}
//	else
//	{
//		printf("你才%s\n",input);
//		goto again;
//	}
//	return 0;
//}//事实上并不需要goto